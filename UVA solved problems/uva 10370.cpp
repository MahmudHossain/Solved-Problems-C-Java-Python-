#include<bits/stdc++.h>
using namespace std;

int main()
{
    double avg,percentage,coun=0;
    int a,b,n[1001],sum=0;
    cin>>a;
    for(int i=0;i<a;i++){
            cin>>b;
            sum=0,coun=0;
        for(int j=0;j<b;j++)
        {
            cin>>n[j];
            sum+=n[j];
        }
        avg=sum/b;
        for(int k=0;k<b;k++){
            if(n[k]>avg)
                coun++;
        }
        percentage = (coun/b)*100;
        cout<<setprecision(3)<<fixed<<percentage<<"%"<<endl;
    }
    return 0;
}

