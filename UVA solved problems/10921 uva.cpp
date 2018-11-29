#include<iostream>
#include<cstdio>
#include<cstring>>
using namespace std;
int b,i;
char a[30];
int main()
{

    while(scanf("%s",a)== 1)
    {
        b=strlen(a);
        for(i=0;i<b;i++)
        {
            switch(a[i])
            {
                 case 'A': cout<<"2";break;
                 case 'B': cout<<"2";break;
                 case 'C': cout<<"2";break;
                 case 'D': cout<<"3";break;
                 case 'E': cout<<"3";break;
                 case 'F': cout<<"3";break;
                 case 'G': cout<<"4";break;
                 case 'H': cout<<"4";break;
                 case 'I': cout<<"4";break;
                 case 'J': cout<<"5";break;
                 case 'K': cout<<"5";break;
                 case 'L': cout<<"5";break;
                 case 'M': cout<<"6";break;
                 case 'N': cout<<"6";break;
                 case 'O': cout<<"6";break;
                 case 'P': cout<<"7";break;
                 case 'Q': cout<<"7";break;
                 case 'R': cout<<"7";break;
                 case 'S': cout<<"7";break;
                 case 'T': cout<<"8";break;
                 case 'U': cout<<"8";break;
                 case 'V': cout<<"8";break;
                 case 'W': cout<<"9";break;
                 case 'X': cout<<"9";break;
                 case 'Y': cout<<"9";break;
                 case 'Z': cout<<"9"; break;
                 default:  cout<<a[i];break;
            }
        }
        cout<<endl;
    }
}
