#include<iostream>
using namespace std;
//int n;
void merge_sort(int [],int ,int );
void merge(int [],int,int ,int );

int main()
{
   int n;


    while(1)
    {
        cin>>n;
        int a[n];

        if (n==0)
            break;
        else
        {
           //int a[n];
           for(int i=1;i<=n;i++)
              {
                    cin>>a[i];
              }
        }
    int p=1,r=n;

    merge_sort(a,p,r);

          for(int i=1;i<=n;i++)
             {
                 if(i<n){
                 cout<<a[i]<<" ";}
                 else
                    cout<<a[i];
             }
           cout<<endl;


    }
    return 0;
}

void merge_sort(int a[],int p,int r)
    {
        int q;
        if(p<r)
        {
         q=(p+r)/2;
         merge_sort(a,p,q);
         merge_sort(a,q+1,r);
         merge(a,p,q,r);
        }
    }

 void merge(int a[],int p,int q,int r)
    {
        //cout<<"Entered merge"<<endl;
        int n1=q-p+1;
        int n2=r-q;
        int L[n1+1];
        int R[n2+1];
        for(int i=1;i<=n1;i++)
        {
            L[i]=a[p+i-1];
        }
        for(int j=1;j<=n2;j++)
        {
            R[j]=a[q+j];
        }
        L[n1+1]=999;
        R[n2+1]=999;
        int i=1, j=1;
        for(int k=p;k<=r;k++)
        {
            if(L[i]<=R[j])
            {
                a[k]=L[i];
                i=i+1;
            }
            else
            {
                a[k]=R[j];
                j=j+1;
            }
        }
    }
