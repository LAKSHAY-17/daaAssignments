#include<iostream>
using namespace std;
//used nested loop
//binary se bhi ho jaega

int  countdiffer(int arr[],int n, int key)
{
    int counter=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])==key)
            {
                counter++;
            }
        }
    }
    return counter;
}


int  main()
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
    int count =countdiffer(arr,n,key);
    cout<<count;   

    }
    return 0;
    
}