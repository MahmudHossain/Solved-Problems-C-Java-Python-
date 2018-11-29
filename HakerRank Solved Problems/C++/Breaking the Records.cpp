#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,arr[1001];
    int min1,max1,best=0,worst=0;
    cin>>n;
    for(int i=0;i<n;i++){
           // min1=arr[0],max1=arr[0];
          cin>>arr[i];
           min1=arr[0],max1=arr[0];
    }
    for(int i=0;i<n;i++){
         if(arr[i]>max1){
            max1=arr[i];
            best++;
          }
           if(arr[i]<min1){
            min1=arr[i];
            //cout<<min1<<endl;
            worst++;
          }
    }
    cout<<best<<" "<<worst<<endl;
    return 0;
}
