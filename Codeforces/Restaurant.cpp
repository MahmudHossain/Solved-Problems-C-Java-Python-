#include<bits/stdc++.h>
using namespace std;
int gcd(int ,int);
int main()
{
    int t,l,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l>>b;
      int  result = gcd(l,b);
     int quotient_l = l/result;
     int quotient_b = b/result;
     int fnal = quotient_l*quotient_b;
     cout<<fnal<<endl;


    }

    return 0;
}
int gcd(int a,int b){
    int temp;
    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;

}
