#include<bits/stdc++.h>
using namespace std;

int mai()
{
    int a,b,m,n,mrides;
    cin>>n>>m>>a>>b;
    int nrides=n*a;
    int quotent= n/m;
    if(n%m == 0){
     mrides=quotent*b;
    }
    else
    {
        int mod=n%m;
        mrides =mod*a+quotent*b;
    }
    if(nrides<mrides)
        cout<<nrides<<endl;
    else
        cout<<mrides<<endl;

    return 0;


}

