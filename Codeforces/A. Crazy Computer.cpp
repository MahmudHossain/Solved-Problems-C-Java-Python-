#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,arr[100001],kount=1;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>arr[i];
      }

     for(int j=0;j<n;j++){
            if((arr[j+1]-arr[j]) < 1)
            break;

       else if((arr[j+1]-arr[j]) <= c)
            kount++;
        //else
            else if(arr[j+1]-arr[j] > c)
            kount=1;
    }


         cout<<kount<<endl;

    return 0;
}
