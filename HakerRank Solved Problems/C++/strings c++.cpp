
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a,b,c,temp;
    cin>>a;
    //cout<<endl;
    cin>>b;
    int len_a = a.size();
    int len_b = b.size();
    c = a+b;
    //a.replace = (0,1,b[0]);
    //b.replace = (0,1,a[0]);
    swap(a[0],b[0]);
    cout<<len_a<<" "<<len_b<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;


    return 0;
}
