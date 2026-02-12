#include<iostream>
using namespace std;
class person
{
	public:
	  string address;
	  int phoneno;
	  int age;
	  public:
	  void getpersondata()
	  {
	  	cout<<"Enter the address:";
	  	cin>>address;
	  	cout<<"Enter mobile no:";
	  	cin>>phoneno;
	  	cout<<"Enter the age:";
	  	cin>>age;
	  }
	  bool iseligible()
	  {
	  	if(age>=18)
	  	{
	  		return"yes";
		  }
		  else
		  {
		  	return"no";
		  }
	  }
	  
};
class student
{
	public:
		int id;
		string name;
        string dept;
        public:
	   void getstuddata()
	  {
	  	cout<<"enter the student id:";
	  	cin>>id;
	  	cout<<"Enter name:";
	  	cin>>name;
	  	cout<<"Enter Department:";
	  	cin>>dept;
	  }
	   void displayprofile()
		  {
		  	cout<<"ID:"<<id<<endl;
		  	cout<<"Name:"<<name<<endl;
		  	cout<<"Department:"<<dept<<endl;
	      }
		  
};
class graduate:public person,public student
{
	public:
		int grade;
		int graduationyear;	
		void readgraduate()
		{
			getstuddata();
			getpersondata();
			cout<<"Enter Grade:";
			cin>>grade;
			cout<<"\n Enter Graduation Year:";
			cin>>graduationyear;
		}
		int sincegraduation()
		{
		  int currentyear=2026;
		  return currentyear-graduationyear;	
		}
		string classification()
		{
			if(grade>=75)
			{
				return"FIRST CLASS";
			}
			else
			{
				return"PASS";
			}
		}
		void displayprofile1()
		{
			displayprofile();
			cout<<"Address:"<<address<<endl;
			cout<<"Phoneno:"<<phoneno<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Eligibility:"<<iseligible()<<endl;
			cout<<"Years since graduation:"<<sincegraduation()<<endl;
			cout<<"classification:"<<classification()<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter the number of students:";
	cin>>n;
	graduate g[100];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter details of student"<<i+1<<endl;
		g[i].readgraduate();
	}
	for(int i=0;i<n;i++)
	{
		g[i].displayprofile1();
	}
	return 0;
}
