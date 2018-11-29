#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a[2001],con=0,sum=0,gona=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] <= h)
            con++;
        else
           gona = gona+2;
    }
    sum = con+gona;
    cout<<sum<<endl;
  return 0;
}
