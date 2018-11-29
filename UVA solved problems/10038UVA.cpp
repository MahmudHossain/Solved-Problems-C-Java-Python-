#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int a,n[3001],b[3001],flag=0,j;
    while(scanf("%d",&a)==1)
    {
    for(int i=0;i<a;i++){
        cin>>n[i];
    }
    for( j=0;j<a-1;j++){

        b[j] = abs(n[j+1]-n[j]);

    }
    sort(b,b+j);

    for(int k=1;k<a;k++)
        {
             if(b[k]==b[k-1]){
                  flag=1;
                 break;
        }
    }

  if(flag==1)
    cout<<"Not jolly"<<endl;
  else
    cout<<"Jolly"<<endl;
}

    return 0;
}
