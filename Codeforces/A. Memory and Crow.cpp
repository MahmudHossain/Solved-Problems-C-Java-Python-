#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    long long int a[100001];
    cin>>n;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
         int ans = a[j]+a[j+1];
        cout<<ans<<" ";
    }
    cout<<endl;

    return 0;
}

