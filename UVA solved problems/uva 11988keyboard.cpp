
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    while (gets(str))
    {

        if(str == "e" || str == "E" )
            cout<<"q";
        else if(str == "r" || str == "R")
            cout<<"w";
        else if(str == "t" || str == "T")
            cout<<"e";
         else if(str == "y" || str == "Y")
            cout<<"r";
          else if(str == "u" || str == "U")
            cout<<"t";
           else if(str == "i" || str == "I")
            cout<<"y";
            else if(str == "o" || str == "O")
                cout<<"u";
            else if(str == "p" || str == "P")
                cout<<"i";
            else if(str == "[")
                cout<<"o";
            else if(str == "]")
                cout<<"p";
            else if(str == "d" || str == "D")
                cout<<"a";
            else if(str == "f" || str == "F")
                cout<<"s";
            else if(str == "g" || str == "G")
                cout<<"d";
            else if(str == "h" || str == "H")
                cout<<"f";
            else if(str == "j" || str == "J")
                cout<<"g";
            else if(str == "k" || str == "K")
                cout<<"h";
            else if(str == "l" || str == "L")
                cout<<"j";
            else if(str == ";")
                cout<<"k";
            else if(str == "'")
                cout<<"l";
            else if(str == "c" || str == "C")
                cout<<"z";
            else if(str == "v" || str == "V")
                cout<<"x";
            else if(str == "b" || str == "B")
                cout<<"c";
            else if(str == "n" || str == "N")
                cout<<"v";
            else if(str == "m" || str == "M")
                cout<<"b";
            else if(str == ",")
                cout<<"n";
            else if(str == ".")
                cout<<"m";
            else if(str == "/")
                cout<<",";
            else if(str == " ")
                cout<<" ";

            }

            cout<<endl;
}

