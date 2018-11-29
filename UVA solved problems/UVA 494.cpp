#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main()
{
    char a[1000];
    int word = 1;
    gets(a);
    int ln = strlen(a);

   // int len= strlen(a);
    for(int i=0;i<ln;i++){
        if(a[i]==' ')

            word++;
    }
 cout<<word<<endl;
    return 0;
}

