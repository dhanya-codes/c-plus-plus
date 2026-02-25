#include <iostream>
#include <string>
using namespace std;

// Function template
template <class T>
void sortAscending(T arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display array
template <class T>
void display(T arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {5, 2, 9, 1, 3};
    float b[] = {3.4, 1.2, 5.6, 2.8};
    string c[] = {"banana", "apple", "mango", "grape"};

    sortAscending(a, 5);
    sortAscending(b, 4);
    sortAscending(c, 4);

    cout << "Sorted integers: ";
    display(a, 5);

    cout << "Sorted floats: ";
    display(b, 4);

    cout << "Sorted strings: ";
    display(c, 4);
}