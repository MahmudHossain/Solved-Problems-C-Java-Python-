#include<bits/stdc++.h>
using namespace std;
int kount=0;
int main()
{
    int m,n;
    cin>>n>>m;

    for(int p=1;p<=n;p++){
        for(int q=1;q<=m;q++)
        {
            if((p+q)%5 == 0)
                kount++;
        }
    }
    cout<<kount<<endl;
    return 0;
}
