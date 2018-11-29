#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j,k=0;
    int arr[20];
    cin>>a;
    for(i=0;i<a;i++){
            cin>>b;
        for(j=0;j<b;j++)
        {
            cin>>arr[j];

        if((j/2)==0){
       cout<<"Set ": "<<arr[j]<<endl;}
        //cout<<arr[j]<<endl;
       // j+=2;
       }

       //cout<<"Set "<<j+1<<": "<<arr[j]<<endl;
       //j+=2;
    }
}
