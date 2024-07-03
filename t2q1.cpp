#include <iostream>
# include <string>

using namespace std;

int main()
{
   int num;
    int count =3;

    while(count>0)
     {
        cout<<"Please enter a number: ";
        cin>>num;

        if (num==0 )
            {
                cout<<num<<" is equal to 0. "<<endl;
            }

            else if (num>0 )
            {
                cout<<num<<" is positive."<<endl;
            }

            else 
            cout<<num<<" is negative."<<endl;
            
        count--; 
       }
    return 0;
}