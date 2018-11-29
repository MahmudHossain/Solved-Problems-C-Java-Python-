#include<iostream>>
using namespace std;

int main()
{
    int n,sum=0;

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            sum = (n*(n+1)*(2*n+1))/6;
            cout<<sum<<endl;
        }
    }

}
