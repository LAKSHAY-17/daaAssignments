#include<iostream>
using namespace std;

void jumpsearch(int arr[],int n,int key)
{
    int i=0;
    int j=2;
    int camp =0;
    while(arr[j]<=key&&j<n)
    {
         camp++;
        i=j;
        j+=2;
        if(j>n-1){
            j=n;
           
        }
    }
    for(int k=i;k<j;k++)
    {
        int count=0;
        count++;
        if(arr[k]==key)
        {
         cout<<"present-"<<(camp+count);
        }
        else
        {
         cout<<" not present-"<<(camp+count);
            break;
        }
        
    }


}

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
   jumpsearch(arr,n,key);
    }

    return 0;
}