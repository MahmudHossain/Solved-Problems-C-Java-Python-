#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    double n,count_n=0,pos=0,zero=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]<0)
            count_n++;
        else if(arr[arr_i]>0)
            pos++;
            else
            zero++;
    }
   double positive = pos/n;
    double negative = count_n/n;
    double jero = zero/n;
    cout<<setprecision(6)<<fixed<<positive<<endl;
    cout<<setprecision(6)<<fixed<<negative<<endl;
    cout<<setprecision(6)<<fixed<<jero<<endl;



    return 0;
}

