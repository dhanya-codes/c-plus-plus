#include<iostream>
#include<string>
using namespace std;
class voter
{
	public:
		int id;
		string name;
		int age;
		string mobno;
	  void getvoterdata()
	  {
	  	cout<<"Enter the voter id:";
	  	cin>>id;
	  	cout<<"Enter the Name:";
	  	cin>>name;
	  	cout<<"Enter the age:";
	  	cin>>age;
	  	cout<<"Enter Mobile Number:";
	  	cin>>mobno;
	}
	void eligibility()
	{
		if(age<=18)
		{
			throw"AGE IS NOT ELIGIBLE";
		}
}
	void mobile()
	{
		if(mobno.length()!=10)
		{
			throw"Mobile no is not in the correct form";
	
	}
}
	void display()
	{
		cout<<"VOTER ID:"<<id<<endl;
		cout<<"NAME:"<<name<<endl;
		cout<<"AGE:"<<age<<endl;
		cout<<"MOBILE NO:"<<mobno<<endl;
	}
};
int main()
{
	
	
	try
	{
		voter v;
		v.getvoterdata();
		v.eligibility();
		v.mobile();
		v.display();
		}
	catch(const char*msg)
	{
		cout<<"error"<<msg<<endl;
	}
}
	

