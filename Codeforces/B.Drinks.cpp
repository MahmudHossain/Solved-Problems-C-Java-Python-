#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a[1000],total_volume,sum=0,b,true_percentage;
    cin>>total_volume;
    for(int i=0;i<total_volume;i++)
    {
        cin>>a[i];
        b = a[i]/100;
        sum = sum+a[i];
    }
    true_percentage = sum/total_volume;
    //if(((sum-total_volume)/sum) < 0.0001)
        cout<<setprecision(12)<<fixed<<true_percentage<<endl;

    return 0;
}
