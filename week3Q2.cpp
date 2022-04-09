#include<iostream>
using namespace std;

void selection(int arr[],int n)
{ int camp=0;
int shift=0;
    for(int i=0;i<n-1;i++)
    {
        int min=arr[i];
         int loc=i;
         for(int j=i+1;j<n;j++)
         {
           camp++;
             if(arr[j]<min)
             {
                 
              min=arr[j];
              loc=j;
             }
         }   
         swap(arr[i],arr[loc]);
        shift++;

         
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<camp;
    cout<<endl<<shift;
}


int main()
{
    int t,n,arr[100];
    cin>>t;
   
    while(t--)
    {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
   
    }
}