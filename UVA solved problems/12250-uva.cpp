#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int i=1,b=1;
    while(i<=2000)
    {
        cin>>a;
        if(a == "#")
           break;


        else if(a == "HELLO")
        {
            cout<<"Case "<<b<<": "<<"ENGLISH"<<endl;
        }

       else if(a == "HALLO")
        {
            cout<<"Case "<<b<<": "<<"GERMAN"<<endl;
        }

       else if(a == "HOLA")
        {
            cout<<"Case "<<b<<": "<<"SPANISH"<<endl;
        }

        else if(a == "BONJOUR")
        {
            cout<<"Case "<<b<<": "<<"FRENCH"<<endl;
        }

       else if(a == "CIAO")
        {
            cout<<"Case "<<b<<": "<<"ITALIAN"<<endl;
        }
       else if(a == "ZDRAVSTVUJTE")
        {
            cout<<"Case "<<b<<": "<<"RUSSIAN"<<endl;
        }


                else
                 cout<<"Case "<<b<<": "<<"UNKNOWN"<<endl;

        b++;
        i++;
    }
}
