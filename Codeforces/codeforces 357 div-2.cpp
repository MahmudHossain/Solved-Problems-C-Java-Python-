#include<bits/stdc++.h>
using namespace std;
int flag =0,n;
int main()
{
    string a;
    int bef[1000],aft[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>bef[i]>>aft[i];

    }
      for(int j=0;j<n;j++){
             if(bef[j]>=2400 && aft[j]>bef[j])
            flag=1;
      }
      if(flag==1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    return 0;
}
