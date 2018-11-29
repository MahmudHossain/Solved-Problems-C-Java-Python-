#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a[100001],q,x[100001],kount=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    for(int j=0;j<q;j++){
        cin>>x[j];
    }

    for(int m=0; m<q; m++)
    {
       kount=0;
    for(int k=0;k<n;k++){
        if(x[m] >= a[k])
            kount++;
    }
    cout<<kount<<endl;
  }
  return 0;
}
