#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int add1 = 0;
int add2 = 0;
int sum =0;
//int strsum2 =0;
int main()
{
    char he[25];
    char she[25];
    while(!EOF)
    {
       gets(he);
       gets(she);
       int len_he = strlen(he);
       int len_she = strlen(she);
       for(int i=0;i<len_he;i++)
       {
            if(he[i] == 'a' || he[i] == 'A' )
            sum = 1;
           else if(he[i] == 'b' || he[i] == 'B' )
            sum = 2;
          else if(he[i] == 'c' || he[i] == 'C' )
            sum = 3;
          else if(he[i] == 'd' || he[i] == 'D')
            sum = 4;
          else if(he[i] == 'd' || he[i] == 'D')
            sum = 4;
        else if(he[i] == 'e' || he[i] == 'E')
            sum = 5;
          else if(he[i] == 'f' || he[i] == 'F')
            sum = 6;
             else if(he[i] == 'g' || he[i] == 'G')
            sum = 7;
             else if(he[i] == 'h' || he[i] == 'H')
            sum = 8;
             else if(he[i] == 'i' || he[i] == 'I')
            sum = 9;
             else if(he[i] == 'j' || he[i] == 'J')
            sum = 10;
             else if(he[i] == 'k' || he[i] == 'K')
            sum = 11;
             else if(he[i] == 'l' || he[i] == 'L')
            sum = 12;
             else if(he[i] == 'm' || he[i] == 'M')
            sum = 13;
             else if(he[i] == 'n' || he[i] == 'N')
            sum = 14;
             else if(he[i] == 'o' || he[i] == 'O')
            sum = 15;
             else if(he[i] == 'p' || he[i] == 'P')
            sum = 16;
             else if(he[i] == 'q' || he[i] == 'Q')
            sum = 17;
             else if(he[i] == 'r' || he[i] == 'R')
            sum = 18;
             else if(he[i] == 's' || he[i] == 'S')
            sum = 19;
             else if(he[i] == 't' || he[i] == 'T')
            sum = 20;
             else if(he[i] == 'u' || he[i] == 'U')
            sum = 21;
             else if(he[i] == 'v' || he[i] == 'V')
            sum = 22;
             else if(he[i] == 'w' || he[i] == 'W')
            sum = 23;
             else if(he[i] == 'x' || he[i] == 'X')
            sum = 24;
             else if(he[i] == 'y' || he[i] == 'Y')
            sum = 25;
             else if(he[i] == 'z' || he[i] == 'Z')
            sum = 26;
            else
                sum = 0;

             add1 = add1+sum;
       }
       char change1[10] ;
             if(sum>9){
             itoa(add1,change1,10);
             int newlen1 = strlen(change1);
             for(int p=0;p<newlen1;p++)
             {
                 add1 =add1+change1[p];
             }
            }

       for(int i=0;i<len_she;i++)
       {
            if(he[i] == 'a' || he[i] == 'A' )
            sum = 1;
           else if(he[i] == 'b' || he[i] == 'B' )
            sum = 2;
          else if(he[i] == 'c' || he[i] == 'C' )
            sum = 3;
          else if(he[i] == 'd' || he[i] == 'D')
            sum = 4;
          else if(he[i] == 'd' || he[i] == 'D')
            sum = 4;
        else if(he[i] == 'e' || he[i] == 'E')
            sum = 5;
          else if(he[i] == 'f' || he[i] == 'F')
            sum = 6;
             else if(he[i] == 'g' || he[i] == 'G')
            sum = 7;
             else if(he[i] == 'h' || he[i] == 'H')
            sum = 8;
             else if(he[i] == 'i' || he[i] == 'I')
            sum = 9;
             else if(he[i] == 'j' || he[i] == 'J')
            sum = 10;
             else if(he[i] == 'k' || he[i] == 'K')
            sum = 11;
             else if(he[i] == 'l' || he[i] == 'L')
            sum = 12;
             else if(he[i] == 'm' || he[i] == 'M')
            sum = 13;
             else if(he[i] == 'n' || he[i] == 'N')
            sum = 14;
             else if(he[i] == 'o' || he[i] == 'O')
            sum = 15;
             else if(he[i] == 'p' || he[i] == 'P')
            sum = 16;
             else if(he[i] == 'q' || he[i] == 'Q')
            sum = 17;
             else if(he[i] == 'r' || he[i] == 'R')
            sum = 18;
             else if(he[i] == 's' || he[i] == 'S')
            sum = 19;
             else if(he[i] == 't' || he[i] == 'T')
            sum = 20;
             else if(he[i] == 'u' || he[i] == 'U')
            sum = 21;
             else if(he[i] == 'v' || he[i] == 'V')
            sum = 22;
             else if(he[i] == 'w' || he[i] == 'W')
            sum = 23;
             else if(he[i] == 'x' || he[i] == 'X')
            sum = 24;
             else if(he[i] == 'y' || he[i] == 'Y')
            sum = 25;
             else if(he[i] == 'z' || he[i] == 'Z')
            sum = 26;
            else
                sum = 0;


             add2 = add2+sum;
       }
       char change2[10] ;
             if(sum>9){
             itoa(add2,change2,10);
             int newlen2 = strlen(change2);
             for(int q=0;q<newlen2;q++)
             {
                 add2 =add2+change2[q];
             }
            }
       double per = (add2/add1)*100;
       cout<<setprecision(2)<<fixed<<per<<endl;
    }
    return 0;
}
