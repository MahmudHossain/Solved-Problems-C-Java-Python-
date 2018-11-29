#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int minimum(int x,int y ,int z)
{
    if(x<y && x<z)
        return x;
    else if(y<x && y<z)
        return y;
    else
        return z;
}
int main()
{
    int a,b,c,sub1,sub2,sub3,sub4,sub5,sub6,sum1,sum2,sum3;
    cin>>a>>b>>c;
    sub1 = abs(a-b);
    sub2 = abs(a-c);
    sub3 = abs(b-a);
    sub4 = abs(b-c);
    sub5 = abs(c-a);
    sub6 = abs(c-b);
    sum1 = sub1+sub2;
    sum2 = sub3+sub4;
    sum3 = sub5+sub6;
    int ans = minimum(sum1,sum2,sum3);
    cout<<ans<<endl;

    return 0;

}
