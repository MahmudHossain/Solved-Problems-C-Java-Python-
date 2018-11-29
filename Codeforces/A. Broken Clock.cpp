#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char f[10];
    cin>>t;
    cin>>f;
    if(t<25)
    {
        int len = strlen(f);
        //for(int i=0;i<len;i++){
            if(((f[0]<='1' && f[1]<='9') || (f[0]<='2' && f[1]<='4')) && (f[3]<='5' && f[4]<='9'))
                cout<<f<<endl;

        //}
    }

}
