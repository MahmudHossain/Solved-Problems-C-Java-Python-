#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,counnt=1;
    long long int n[100005];
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n[i];
    }
    for(int j=0;j<a-1;j++){

        if(n[j]<n[j+1]){
            counnt++;
        }
   else
    counnt = 1;

    }
    cout<<counnt<<endl;

    return 0;
}
