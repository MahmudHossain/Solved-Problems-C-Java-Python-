#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b;

    cin>>n;

    a = n*(n-1)*(n-2);

    b = (n-1)*(n-2)*(n-3);
    if(n<=3){
    if(n==1)
        cout<<n<<endl;
    else if(n==2)
        cout<<n<<endl;
    else
        cout<<a<<endl;
    }
    else if(n%2 == 0)
        cout<<b<<endl;
    else
        cout<<a<<endl;

    return 0;
}
