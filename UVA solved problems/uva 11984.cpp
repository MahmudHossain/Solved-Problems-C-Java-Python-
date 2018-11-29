#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    float b,c,d;
    int n;
    float ans,f;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c>>d;
        f=9.0*c/5+32+d;
        ans=5*(f-32)/9;
        printf("Case %d: %.2f\n",i+1,ans);
    }
    return 0;
}

