#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int L;
    long long int N ;
    long long int T;
    int ans,i=1;
    cin>>T;
    for(int a=0;a<T;a++){

        cin>>L>>N;

    ans = (L-N)-1;
    cout<<"Case "<<i<<": "<<ans<<endl;
    i++;
  }

    return 0;
}
