
//WAP for finding the username in the given string
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int i;
    string str;
    cout<<"Enter the email: ";
    getline(cin,str);

    i=(int)str.find('@');

    cout<<"username is "<<str.substr(0,i)<<endl;

}
