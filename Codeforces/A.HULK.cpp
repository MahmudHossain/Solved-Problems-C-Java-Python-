#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a = "I hate ";
    string d = "it";
    string b = "that I love ";
    string c = "that I hate ";
    cin>>n;
    cout<<a;
        for(int i=2;i<=n;i++){

            if(i%2 == 0)
                cout<<b;
            else
                cout<<c;
    }
      cout<<d<<endl;
    return 0;
}
