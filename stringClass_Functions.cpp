#include <iostream>
#include<string>
using namespace std;

int main()
{
 string str;
 getline(cin,str);
 cout<<str<<endl;


 cout<<"length="<<str.length()<<endl;

 cout<<"size+"<<str.size()<<endl;

 str.resize(7);

 cout<<str<<endl;
 cout<<"maximum size="<<str.max_size();

 str.clear();

 str="Akash";

 if(str.empty())
 {
     cout<<"string is empty"<<endl;

 }
 else {
     cout<<str<<endl;
 }
}
