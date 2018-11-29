#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,flag=0;
    char ch[101];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>ch[j];
        }
        for(int k = 0; k < m; k++){
            if(ch[k]== 'M' || ch[k]=='C' || ch[k]== 'Y')
                flag = 1;
        }

    }
    if(flag == 0)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;

    return 0;
}
