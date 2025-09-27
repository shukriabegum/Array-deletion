#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a size:";
    cin>>n;
    int a[n];
    cout<<"Element of array;";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"After deletion:";
    for(i=0;i<n-1;i++)
    {
        a[i];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
}

