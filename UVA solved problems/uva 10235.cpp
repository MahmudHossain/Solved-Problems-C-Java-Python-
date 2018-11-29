#include <bits/stdc++.h>
#include<cstdio>
using namespace std;
int i,n,flag;

void isprime(int x)
{
  flag=0;
    for(i=2; i<=x/2; i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(x==1)
    {
        flag=1;
    }


}


int main()
{
    int revers=0;


    while(scanf("%d",&n)==1)
   {
       if(n<=0)
        break;
       int ans=n;

    isprime(n);
    if(flag==0){
            revers = 0;
        while(n!=0){
         int remainder = n%10;
        revers = revers*10 + remainder;
        n/=10;
      }

      isprime(revers);
      if(flag==0 && revers!=ans)
        cout<<ans<<" is emirp."<<endl;
        else
            cout<<ans<<" is prime."<<endl;

     }
     else

     cout<<ans<<" is not prime."<<endl;



    }
    return 0;
}
