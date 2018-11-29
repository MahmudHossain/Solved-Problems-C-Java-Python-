#include<bits/stdc++.h>


using namespace std;

int main()
{
    long long int a,sum=0;
    for(int i=0;i<100;i++)
    {
        cin>>a;
        if(a==0)
            break;
        else
            sum+=a;
    }
     cout<<sum<<endl;
     return 0;
}
