#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    if(len-1=='M' && len-2=='P')
        {
        if(s[0]=='1' && s[1]=='2')
            cout<<s<<endl;
        else if(s[0]=='0' && s[0]=='1')
            //cout<<"13:

    }
     else if(len-1=='M' && len-2=='A')
        {
        if(s[0]=='1' && s[1]=='2')
            cout<<"00:00:00PM"<<endl;
    }

    return 0;
}
