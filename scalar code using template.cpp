#include<iostream>
using namespace std;
template <class T>
class scalar
{
	public:
	T v1[100],v2[100];
	int n;
	public:
		void getdata()
		{
			cout<<"Enter the number of digits:";
			cin>>n;
			cout<<"Enter the value 1:";
			for(int i=0;i<n;i++)
			{
				cin>>v1[i];
			}
			cout<<"Enter the value 2:";
			for(int i=0;i<n;i++)
			{
				cin>>v2[i];
			}
		}
		T sum()
		{
			T sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=v1[i]*v2[i];
			}
			return sum;
		}
		void display()
		{
			cout<<"The vector sum"<<sum()<<endl;
		}
		
};
int main()
{
	scalar<int> ints;
	ints.getdata();
	ints.display();
	scalar<float> floats;
	floats.getdata();
	floats.display();
	
}