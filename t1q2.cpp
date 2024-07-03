#include <iostream>
# include <string>

using namespace std;

int main()
{
 int age = -1;
  string name;

  cout<<"Please enter your name: ";
  cin>>name;

  cout<<"Please enter your age: ";
  while (age<=0)
   {
  cin>>age;

  if(age<=0)
    cout<<"Invalid age entered. Please try again: "<<endl;
   }
   

   cout<<"Welcome!"<<endl;
   cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;

    return 0;
}
