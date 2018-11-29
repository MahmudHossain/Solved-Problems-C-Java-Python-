#include <iostream>
using namespace std;

int main()
{
    int n,num,modnum,sum=0,ara[1000],p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        sum=0;
        cin>>num>>modnum;
        for(int i=1;i<=num;i++)
        {
            sum=sum+(i%modnum);
        }
        ara[p++]=sum;
    }
    for(int i=0;i<n;i++)
        cout<<ara[i]<<endl;
    return 0;
}
