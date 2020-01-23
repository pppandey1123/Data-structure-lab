#include<iostream>
using namespace std;
int main()
{
    int a[100],n,m,i,j,c=0,k=0;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to delete:";
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            c++;
            k++;
        }
    }
    n=n-c;
    if(k==0)
    {
        cout<<"element not present in array."<<endl;
    }
    cout<<"Updated array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
return 0;
}
