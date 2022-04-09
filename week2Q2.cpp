#include<iostream>
#include<map>
using namespace std;
int  sumtok(int arr[],int n)
{ int flag=0;
    map<int,int> m;
    for (int i=0;i<n;i++)
    {
        m[arr[i]]=i;
    }
    for (int i=0;i<n-1;i++)
    {
       for (int j=i+1;j<n;j++)
       {
            if (m.find(arr[i]+arr[j])!=m.end())
            {
                  flag=1;
                cout<<i<<" "<<j<<" "<<m[arr[i]+arr[j]]<<endl;
            }
                
       }
    
    }
    return flag;

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
           cin>>arr[i];
        int flag = sumtok(arr,n);
        if(flag==0)
        cout<<"not found ";
    }
   

} 