#include<iostream>
using namespace  std;
int main ()
{   int count =0;
    int flag=0;
    int t,arr[100],n,key;
    cin>>t;
    while (t--)

    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        cin>>key;
        for(int i=0;i<n;i++)
        {
            count++;
            if(arr[i]==key)
            {
            
                flag=1;
            }
            
        }
        
    }
    if(flag==1)
        {
            cout<<"present "<<count-1;
        }
        else{
            cout<<"not present "<<n;
        }
    return 0;
}
