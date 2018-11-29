#include<iostream>
#include<math.h>
#include<iomanip>
#include<cstdio>
#define PI acos(-1)
using namespace std;

int main()
{
    double a,b,c,p,q,r,s,t,radius,area_c,area_t,area_temp,area_small,porisma,temp;
    double radius_intcircle,area_intcircle,main_areacircle;
    while(scanf("%lf%lf%lf",&a,&b,&c) == 3 )
{
    p = (a+b+c);
    q = (a+b-c);
    r = (b+c-a);
    s = (c+a-b);
    t = (p*q*r*s);
    radius = (a*b*c)/sqrt(t);
    area_temp = acos(-1)*radius*radius;
    porisma = (a+b+c)/2;
    temp = porisma*(porisma-a)*(porisma-b)*(porisma-c);
    area_t = sqrt(temp);
    area_c = (area_temp - area_t);

    radius_intcircle = area_t/porisma;
    area_intcircle = acos(-1)*radius_intcircle*radius_intcircle;
    main_areacircle = area_t - area_intcircle;

    cout<<setprecision(4)<<fixed<<area_c<<" ";
    cout<<setprecision(4)<<main_areacircle<<" ";
    cout<<setprecision(4)<<area_intcircle<<endl;
   }

}
