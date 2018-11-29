#include<iostream>

using namespace std;
int total=0;
int i=0;

int main()
{
  int de;
  int rem[1000];


  while(1)
  {   rem[i]=0,i=0,total=0;
      cin>>de;
      if(de == 0)
        break;
      else
      {
        while(de > 0){
        rem[i] = de%2;
        if(rem[i] == 1)
            total++;
        i++;
        de=de/2;

        }
        cout<<"The parity of ";
    for(int j = i-1; j >= 0; j--){
        cout<<rem[j];
    }

     cout<<" is "<<total<<" (mod 2)."<<endl;


    }


  }
  return 0;

}
