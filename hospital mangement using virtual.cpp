#include<iostream>
using namespace std;
class patient
{
	protected:
		int patientid;
		string name;
		int daysadmitted;
	public:
		void virtual input()
		{
		  cout<<"Enter patientid:";
		  cin>>patientid;
		  cout<<"Enter patient Name:";
		  cin>>name;
		  cout<<"Enter the no of days admitted:";
		  cin>>daysadmitted;	
			
		}
		void virtual calculatebill()=0;
		void virtual display()
		{
		  cout<<"PATIENT ID:"<<patientid<<endl;
		  cout<<"PATIENT NAME:"<<name<<endl;
		  cout<<"DAYS ADMITTED:"<<daysadmitted<<endl;	
    	}
		
};
class inpatient:public patient
{
  public:
  	int roomcharperd;
  	int doctorfee;
  	int medicinecharges;
  	float bill1;
     void input()
     {
     	patient::input();
     	cout<<"Enter room charge per day:";
     	cin>>roomcharperd;
     	cout<<"Enter the Doctor fee:";
     	cin>>doctorfee;
     	cout<<"Enter medicinecharges:";
     	cin>>medicinecharges;
	 }
	 void calculatebill()
	 {
	 	 bill1=(daysadmitted*roomcharperd)+doctorfee+medicinecharges;
	 }
	 void display()
	 {
	 	patient::display();
	 	cout<<"TOTAL BILL:"<<bill1;
	 	
	 }
     	
};
class outpatient:public patient
{
	public:
	  int consultantfee;
	  int testcharges;
	  float bill2;
	  void input()
	  {
	  	patient::input();
	  	cout<<"Enter consultantfee:";
	  	cin>>consultantfee;
	  	cout<<"Enter Testcharges:";
	  	cin>>testcharges;
	  }
	  void calculatebill()
	  { 
	    float bill2=consultantfee+testcharges;
	  	
	  }
	  void display()
	  {
	  	patient::display();
	  	cout<<"Total bill="<<bill2;
	  }
	
};
int main()
{
	cout<<"Enter 1 for inpatient and 2 for outpatient"<<endl;
	int n;
	cout<<"Enter the type of patient:";
	cin>>n;
	if(n==1)
	{
		patient*ptr;
		inpatient obj1;
		ptr=&obj1;
		ptr->input();
		ptr->calculatebill();
		ptr->display();
		
	}
	else
	{
		patient*ptr;
		outpatient obj2;
		ptr=&obj2;
		ptr->input();
		ptr->calculatebill();
		ptr->display();
	}
	
	
}

