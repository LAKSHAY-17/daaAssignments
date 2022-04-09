#include<iostream>
using namespace std;


int findduplicate(int arr[],int n,int key,bool searchfirst)
{
    int result=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s-(s-e)/2;
        if(arr[mid]==key)
        {
            result=mid;
            if(searchfirst)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        
    }
    return result;
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
    int firstindex=findduplicate(arr,n,key,true);
    if(firstindex==-1)
    {
     cout<<"no duplicate";
    }
    else{
        int lastindex=findduplicate(arr,n,key,false);
        cout<<key<<"-"<<(lastindex-firstindex+1);

    }
    }
    
    

}
