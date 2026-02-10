#include<iostream>
using namespace std;
class inventory
{
	public:
		int id,quantity;
		string name;
		float price;
		inventory()
		{
			id=0;
			name="";
			price=0;
			quantity=0;
		}
		inventory(int pid,string pname,float pprice,int pquantity)
		{
			id=pid;
			name=pname;
			price=pprice;
			quantity=pquantity;
		}
		void display()
		{
		  cout<<"ID:"<<id;
		  cout<<"NAME:"<<name;
		  cout<<"PRICE:"<<price;
		  cout<<"quantity:"<<quantity;	
		}
		
};
int main()
{
	int n;
	cout<<"Enter number of products:"<<endl;
	cin>>n;
	inventory inv[100];
	int id,quantity;
	string name;
	float price;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the id:"<<endl;
		cin>>id;
		cout<<"Enter the Name:"<<endl;
		cin>>name;
		cout<<"Enter the price:"<<endl;
		cin>>price;
		cout<<"Enter Quantity:"<<endl;
		cin>>quantity;
		inv[i]=inventory(id,name,price,quantity);
	}
		for(int i=0;i<n;i++)
		{
		inv[i].display();	
		}
		system("pause");
		 
		
}

