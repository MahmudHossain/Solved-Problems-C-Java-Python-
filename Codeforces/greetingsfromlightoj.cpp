#include<iostream>
using namespace std;

int main()
{
    int a,b,n,sum;
    cin>>n;
    for(int i=0;i<n;i++){
            sum=0;
        cin>>a>>b;
        sum=a+b;
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }

    return 0;
}
