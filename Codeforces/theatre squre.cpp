#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,n,a,ans;
    cin>>n>>m>>a;
     ans = ceil(n/a)*ceil(m/a);
    cout<<ans*4<<endl;

    return 0;
}
