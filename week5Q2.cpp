#include<iostream>
using namespace std ;

void checkpairsum(int arr[],int n,int sum)
{
   

}


int binary(int arr,int n,int key)
{
int s=0;
int e=n-1;
while(s<=e)
{
    int mid=s-(s-e)/2;
    if(arr[mid]==key)
{
    cout<<"found"
}    
}

    
    

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
    int sum;
    cin>>sum;
    }
    sort(int arr,int n);
    checkpairsum(arr,n,sum);
}