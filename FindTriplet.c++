#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0,check=0;
    for(int i=0;i<n-2;i++)
    {
        for(int k=i+1;k<n-1;k++)
        {
            for(int j=k+1;j<n;j++)
            {
                if(arr[i]+arr[k]+arr[j]==0)
                {cout<<"1";check=1;break;}
            }
            if(check==1)
            break;
        }
                if(check==1)
                break;
    }
            if(check==0)
            cout<<"0";
    return 0;
}
