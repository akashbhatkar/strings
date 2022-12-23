//WAP for converting the case from the string 
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin,str);

    string::iterator it1;
    for (it1=str.begin();it1!=str.end();it1++)
    {
    if((*it1>=65)&&(*it1<=90))
    {
        *it1=*it1+32;

    }

    }
    cout<<str<<endl;
}
