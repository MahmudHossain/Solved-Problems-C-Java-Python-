
#include <iostream>


using namespace std;
long long int sum_max=0,sum_min=0;

int main(){
    long  int a[5];
    long long min,max=0;
    a[0]=min;


    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];

    }
    //cout<<max<<min<<endl;
    for(int i=0;i<5;i++){
        if(a[i]!= max)
            sum_min=sum_min+a[i];
        if(a[i]!= min)
            sum_max=sum_max+a[i];

    }
    cout<<sum_min<<" "<<sum_max<<endl;
    return 0;
}
