#include <iostream>
//WAP for checking the words and vowels in the given string 
#include<string>>
int checkvowels(char);
using namespace std;

int main()
{
    int cnt=0,cnt1=0;
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);

    string::reverse_iterator it;

    for(it=str.rbegin();it!=str.rend();it++)
    {
        if((checkvowels(*it)))
        cnt++;
        else if(checkvowels(*it)==0)
            cnt1++;
    }
    cout<<"vowels in the given string are: "<<cnt<<endl;
    cout<<"Words in the given string are: "<<cnt1<<endl;

}

int checkvowels(char ch)
{
    switch (ch){
    case 'A':
    case'E':
    case'I':
    case'O':
    case'U':
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':return 1;
    }
        return 0;

}
