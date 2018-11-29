#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,s,d,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>d;
        sum1 = (s+d)/2;
        sum2 = (s-d)/2;
        if((s+d)%2 != 0 || s<d || (s-d)%2 !=0)
            cout<<"impossible"<<endl;
        else
            cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}
