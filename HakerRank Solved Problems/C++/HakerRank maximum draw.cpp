#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,n,pairs;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1)
            cout<<"2"<<endl;
        else
            cout<<a+1<<endl;
    }
    return 0;
}
