#include <iostream>

using namespace std;

int main()
{
   char s[50];
   cout<<"Enter your name"<<endl;
   //cin>>s;
   cin.get(s,50);
   cout<<"Welcome "<<s;

}
