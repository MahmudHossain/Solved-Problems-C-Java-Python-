#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    string s;
    int len,n,flag=0,j;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        len=s.size();
        for(j=1;j<=len/2;j++){
            if(abs(s[j]-s[j+1])== abs(s[len-j]-s[len-j-1]))
              //flag=1;
              //len--;
              //}
              break;
        }

        if(j>len/2)
            cout<<"Funny"<<endl;
        else
           cout<<"Not Funny"<<endl;
    }

    return 0;
}
