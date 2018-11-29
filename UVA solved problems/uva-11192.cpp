#include<bits/stdc++.h>
//#include<string>
using namespace std;

int main()
{
    string st;
    int a,i,len,b=0,sum=0,g;

    while(1)
    {
        sum =0,b=0;
        cin>>a;
        if(a==0)
            break;
        else{


            cin>>st;
             len = st.size();
             if(a==1)
                {
                    for(int k=len-1;k>=0;k--)
                    {
                        cout<<st[k];
                    }
                    cout<<endl;
                }
                else {
            //cout<<len;
            //break;
           ///if(len%a == 0){
           g = len/a;
            for(int j=len;j>0;j=j-g){
                     sum = sum+g;

                 for( i=sum-1;i >= b;i--){

                     cout<<st[i];
                 }

              b=b+g;
             // (a-1 )= b;
            }
            cout<<endl;
          }
      }
  }

  return 0;
}
