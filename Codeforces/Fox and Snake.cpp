#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1; i<=n; i++){

        if(i%2 == 1) {

            for(int j=1; j<=m; j++){

            cout<<"#";
             }

        }
    else

    for(int k=1; k<= m; k++){

        if(i%4 == 2) {

              if(k == m)
                  cout<<"#";
             else
                   cout<<".";
               }

        else {

            if(k==1)
                    cout<<"#";
            else
                cout<<".";
             }

        }
        cout<<endl;
    }

    return 0;
}
