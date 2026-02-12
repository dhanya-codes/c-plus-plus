#include<iostream>
using namespace std;
class person
{
	public:
		string name,address;
		int phoneno;
		void getperdata()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter Address:";
			cin>>address;
			cout<<"Enter mobile number:";
			cin>>phoneno;
		}
		void displaypdata()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Address:"<<address<<endl;
			cout<<"Mobile Number:"<<phoneno<<endl;
		}
};
class account:public virtual person
{
	public:
	int accno;
	string acctype,branchname;
	float balance;
	void getaccdata()
	{
		getperdata();
		cout<<"Enter Account no:";
		cin>>accno;
		cout<<"Enter Account Type:";
		cin>>acctype;
		cout<<"Enter Branch Name:";
		cin>>branchname;
		cout<<"Enter your Bank balance:";
		cin>>balance;
	}
	void displayadata()
	{
		cout<<"Account No:"<<accno<<endl;
		cout<<"Account type:"<<acctype<<endl;
		cout<<"Branch name:"<<branchname<<endl;
	}
	void deposit(float depositamt)
	{
		 balance+=depositamt;
	}
	void withdraw(float withdrawamt)
	{
		if(withdrawamt<balance)
		{
		  balance -=withdrawamt;	 
		}else{
			cout<<"Insufficient balance";
		  
	}
}
	
};
class loan
{
	public:
		int loanid;
		string loantype;
		float loanamount;
		int years;
		void getloandata()
		{
			cout<<"Enter loan id:";
			cin>>loanid;
			cout<<"Enter loan type:";
			cin>>loantype;
			cout<<"Enter loan amount:";
			cin>>loanamount;
			cout<<"Enter years of duration:";
			cin>>years;
		}
		float interest()
		{
			int rate=10;
			int SI=(loanamount*rate*years)/100;
			return loanamount + SI;
		}
		void displayloandata()
		{
			cout<<"Loan id:"<<loanid<<endl;
			cout<<"Loan type:"<<loantype<<endl;
			cout<<"Loan amount:"<<loanamount<<endl;
			cout<<"Years of Duration:"<<years<<endl;
			cout<<"Simple Interest"<<interest()<<endl;
		}
		 
		
};
class statement:public account,public loan
{
	public:
		int statementno;
		long long date;
	  void getstatdata()
	  {
	  	getaccdata();
	  	getloandata();
		cout<<"Enter Statement no:";
	  	cin>>statementno;
	  	cout<<"Enter date:";
	  	cin>>date;
		  }
		  void display()
		  {
		  	cout<<"--------CUSTOMER DETAILS--------"<<endl;
		  	displaypdata();
		  	cout<<"--------ACCOUNT DETAILS----------"<<endl;
		  	displayadata();
		  	cout<<"--------LOAN DETAILS-------"<<endl;
		  	displayloandata();
		  	
			  }	
};
int main()
{
    float depositamt,withdrawamt;
	statement s;
	s.getstatdata();
	cout<<"Enter the deposit amount:";
	cin>>depositamt;
	s.deposit(depositamt);
	cout<<"Enter the Withdrawel amount:";
	cin>>withdrawamt;
	s.withdraw(withdrawamt);
	s.display();
	cout<<"Bank Balance:"<<s.balance<<endl;
	
}