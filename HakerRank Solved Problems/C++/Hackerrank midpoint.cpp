
#include<iostream>
using namespace std;
int n;
int main()
{
    int p1,p2,q1,q2,r1,r2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p1>>p2>>q1>>q2;
        r1 = (2*q1)-p1;
        r2 = (2*q2)-p2;
        cout<<r1<<" "<<r2<<endl;

    }
    return 0;
}
