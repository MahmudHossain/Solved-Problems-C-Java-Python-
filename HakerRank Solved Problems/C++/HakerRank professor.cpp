#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,count1=0,count2=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        count1=0,count2=0;
        cin >> n >> k;
       vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
            if(a[a_i] <= 0)
                count1++;
            else
                count2++;
        }
        if(count1 >= k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
