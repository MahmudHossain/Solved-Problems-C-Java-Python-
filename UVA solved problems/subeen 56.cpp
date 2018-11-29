#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double AREA;
int main()
{
    int a,b,c,s,area,n;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b>c && b+c>a && c+a>b){
        s=(a+b+c)/2;
        area=(s*(s-a)*(s-b)*(s-c));
        AREA=sqrt(area);

        cout<<"Area = ";
        cout<<setprecision(3)<<fixed<<AREA<<endl;
    }
            }

}
