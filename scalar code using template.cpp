#include <iostream>
using namespace std;
template<class T>
class vector
{
    T v1[100], v2[100];
    int n;

public:
    void input()
    {
        cout<<"Enter number of elements: ";
        cin>>n;

        cout<<"Enter elements of first vector:\n";
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }

        cout<<"Enter elements of second vector:\n";
        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
        }
    }

    T scalarProduct()
    {
        T sum =0;
        for (int i=0;i<n;i++)
        {
            sum+= v1[i]*v2[i];
        }
        return sum;
    }

    void display()
    {
        cout<<"Scalar Product ="<<scalarProduct()<<endl;
    }
};

int main()
{
    cout << "For Integer Vectors";
    vector<int> intr;//space should be there between objs
    intr.input();
    intr.display();

    cout << "\nFor Float Vectors";
    vector<float> floatr;
    floatr.input();
    floatr.display();

    return 0;
}
