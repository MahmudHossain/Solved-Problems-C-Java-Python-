#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int count_even=0,count_odd=0,result;
int main()
{
   char len[1001];
   int a;
while(1)
{
    cin>>len;
    a = strlen(len);
    for(int i=0;i<a;i++){
        if((len[i]%2)==0)
            count_even++;
        else
            count_odd++;
    }
    result = count_odd - count_even;
    if(len[0] == '0' && len[1]=='\0')
        break;
    else if((result%11)==0)
        cout<<len<<" is a multiple of 11."<<endl;
    else
        cout<<len<<" is not a multiple of 11."<<endl;

}
    return 0;
}
