#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100001],b,m[100001],j,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>b;
    for(int l=0;l<b;l++){
        cin>>m[l];

    }
    for( j=0;j<n;j++){

        if(a[j]== m[j])
        {
            j++;
          }
    }
    for( k=n;k>0;k--){
        if(a[k]== m[k])
            {
                k++;
            }
    }

    cout<<j<<" "<<k<<endl;


    return 0;
}
