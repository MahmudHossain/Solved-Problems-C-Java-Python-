
#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
long long int sum_max=0,sum_min=0;

int main(){
    long  int a[5];
    long long min,max=0;


    for(int i=0;i<5;i++){
        cin>>a[i];


    }
    sort(a,a+5);
    for(int i=0;i<5;i++){
            if(i>=1)
            sum_max=sum_max+a[i];
            if(i!=4)
                sum_min=sum_min+a[i];
    }
    cout<<sum_min<<" "<<sum_max<<endl;
    return 0;
}

