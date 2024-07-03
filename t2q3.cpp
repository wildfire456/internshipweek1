#include <iostream>
# include <string>

using namespace std;

int main()
{

     int num = 1;
     int sum=0;

  for (int i=0; i<10; i++)
   {

    if (i!=9)
    cout<<num++<<" + ";
    
    
    else 
    cout<<num;

     sum+=i+1;
   }
    cout<<" = "<<sum<<endl;
   cout<<endl;
    return 0;

    return 0;
}