#include <iostream>

using namespace std;

int main()
{
    int a;
    float b;
    char s1[40]="234";
    char s2[40]="54.61";

    a=strtol(s1,NULL,10);
    b=strtof(s2,NULL);
    cout<<a<<endl<<b<<endl;

}
