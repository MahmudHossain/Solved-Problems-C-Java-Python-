#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i=0,a;
    vector <int >v;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int j = 0; j <n; j++){
        cout<<v[j]<<" ";
    }
    return 0;
}
