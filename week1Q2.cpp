#include<iostream>
using namespace std;
int main()
{
    int t,n,arr[100],key;
    cin>>t;
   
    while(t--)
    {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
int s=0;
int e=n-1;
int counter=0;
int flag=0;
     while(s<=e)
    {
        int mid=(s+e)/2;
        
        counter++;
        if(arr[mid]==key)
        {
            cout<<" pesent "<<counter;
            flag=1;
            break;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
         else if(arr[mid]<key)
        {
            s=mid+1;
        }
      
    }
    if (flag==0)
        cout<<"Not pesent "<<counter;
       

    }
    return 0;
}