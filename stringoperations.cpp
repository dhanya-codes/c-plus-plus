#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class mystring
{
	public:
		string text;
		mystring(string t)
		{
			text=t;
		}
		void countwordschar()
		{
			int word=0;
			int character=text.length();
			for(int i=0;i<text.length();i++)
			{
				if(text[i]==' ')//everytime increments when space comes cause that space indicates it is new word
				{
					word++;
				}
			}
			word+=1;
			cout<<"Number of Characters:"<<character<<endl;
			cout<<"Number of Words:"<<word<<endl;
		}
		void toupper()
		{
			string temp=text;
			transform(temp.begin(),temp.end(),temp.begin(),::toupper);
			cout<<"Uppercase:"<<temp<<endl;
			
		}
		void tolower()
		{
			string temp=text;
			transform(temp.begin(),temp.end(),temp.begin(),::tolower);
			cout<<"Lowercase:"<<temp<<endl;
		}
		void checkpalindrome()
		{
			string temp=text;
			string rev=text;
			reverse(rev.begin(),rev.end());
			if(temp==rev)
			{
				cout<<"It is a palindrome"<<endl;
			}
			else
			{
				cout<<"It is not a palindrome"<<endl;
			}
		}
		 void replacestring(int start,int len,string newsub)
		 {
		 	if(start>=0&&start<=text.length())
		 	{
		 	text.replace(start,len,newsub);
		 }
		 	else
		 	{
			 
		 	cout<<"Invalid syntax"<<endl;
		 }
		 cout<<"Modified string"<<text<<endl;
		 }
		
};
int main()
{
string input;
cout<<"Enter a String:";
getline(cin,input);
mystring s(input);
int choice;
    do {
        cout << "\n1.Count Words & Characters\n";
        cout << "2.Convert to Uppercase\n";
        cout << "3.Convert to Lowercase\n";
        cout << "4.Check Palindrome\n";
        cout << "5.Replace Substring\n";
        cout << "6.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                s.countwordschar();
                break;
            case 2:
                s.toupper();
                break;
            case 3:
                s.tolower();
                break;
            case 4:
                s.checkpalindrome();
                break;
            case 5: {
                int start, len;
                string newSub;
                cout << "Enter start index: ";
                cin >> start;
                cout << "Enter length: ";
                cin >> len;
                cout << "Enter new substring: ";
                cin >> newSub;
                s.replacestring(start, len, newSub);
                break;
            }
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 6);

    return 0;
}


