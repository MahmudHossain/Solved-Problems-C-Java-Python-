#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,arr[10001],k,n;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n>>k;

        if(k >= n/2)
            cout<<2*(n-k-1)<<endl;
        else
            cout<<(2*k)+1<<endl;
    }
}
