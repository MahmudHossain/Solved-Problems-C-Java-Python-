#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,x;
    cin>>n>>k;
   /* while(1)
    {
         n++;
         if(n<k){
            cout<<k<<endl;
            break;
            }
       else if(n%k == 0){
            cout<<n<<endl;
             break;
             }
    }*/
    x  = (floor(n/k)+1)*k;
    cout<<x<<endl;
    return 0;
}
