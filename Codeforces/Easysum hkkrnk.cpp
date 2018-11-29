#include<bits/stdc++.h>
using namespace std;

int bigmod(int,int,int);
int main()
{
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
    }
    return 0;
}
int bigmod(int a, int b, int M)
{
     if(b == 0) return 1 % M;
      int x = bigmod(a, b / 2, M);
       x = (x ∗ x) % M; ৬
       if(b % 2 == 1) x = (x ∗ a) % M;
        return x;
}


