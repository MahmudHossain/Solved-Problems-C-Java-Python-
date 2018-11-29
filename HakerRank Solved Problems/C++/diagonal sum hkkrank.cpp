#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,sum1=0,sum2=0,k;

    cin >> n;
    int matrix[n][n];
for(int i=0, k=n-1; i< n; i++){
    for(int j=0; j< n; j++){
        cin >> matrix[i][j];
        if(i==j)
         sum1 += matrix[i][j];
    }
    sum2 += matrix[i][k];
    k -= 1;
}

cout << abs(sum1-sum2);

    return 0;
}
