#include <bits/stdc++.h>

using namespace std;
int i,test;

int main() {
    int n,flag=0;
    cin >> n;
    vector<int> grades(n);
    for(int i = 0; i < n; i++){
       cin >> grades[i];

    if(grades[i]<38)
        cout<<grades[i]<<endl;
    else if(grades[i] > 37 && grades[i] < 101)
        {
        for(int j=grades[i];j<(grades[i]+5);j++){
              if(j%5 == 0){
                   test=j-grades[i];
                  if(test<3)
                      cout<<j<<endl;
                 else
                    cout<<grades[i]<<endl;

              }
        }
       // if(flag==0)
            //cout<<grades[i]<<endl;
    }
}
    return 0;
}
