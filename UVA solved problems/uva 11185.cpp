#include<bits/stdc++.h>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int i=0;
int main()
{
    long long int a;
    //int i=0;
    int rem[1000];
    while(1)
    {
        //int i=0;
        rem[i]=0,i=0;
        cin>>a;
        if(a<0)
            break;
            else if (a == 0)
                cout<<"0"<<endl;
        else
        {
            //1rem[i] = 0;
            while(a>0)
            {
                //if(a==0)
                  //  break;
            rem[i] = a%3;
            i++;
            a = a/3;
        }
       for(int j = i-1;j>=0;j--){
        cout<<rem[j];
        }
         cout<<endl;
      }

   }
   return 0;
}
