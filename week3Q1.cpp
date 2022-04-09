#include<iostream>
using namespace std;

void insertionsort(int arr[] ,int n)
{
    int shift=0;
    int camp=0;
    for(int i=1;i<n;i++)
    {
        shift++;
     
     int j=i-1;
      int current=arr[i];
     
     while(arr[j]>current&&j>=0)
     {
         camp++;
         arr[j+1]=arr[j];
         j--;
         
     }
        arr[j+1]=current;
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    cout<<"comparions="<<camp<<endl;
    cout<<"shifts="<<shift<<endl;
        
    
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
    insertionsort(arr,n);
   
    }
}