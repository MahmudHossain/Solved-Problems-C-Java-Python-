#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,kount=0,cont=0,kount2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>b)
            kount++;
        else if(b==a)
            kount2++;
        else
                cont++;

    }
        if(kount>cont)
            cout<<"Mishka"<<endl;
        else if(cont == kount)
            cout<<"Friendship is magic!^^"<<endl;
        else
            cout<<"Chris"<<endl;

    return 0;
}
