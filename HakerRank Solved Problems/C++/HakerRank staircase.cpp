#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,j;
    cin >> n;
    for(int i=1;i<=n;i++)
        {
        for( j=n;j>i;j--){
            cout<<" ";
        }
            for(int k=1;k<=i;k++){
                cout<<"#";
            }
            cout<<endl;
        }

    return 0;
}
