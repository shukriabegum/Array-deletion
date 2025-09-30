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
    int pos;
    cout<<"Enter position:";
    cin>>pos;
    while(pos<1||pos>n)
    {
        cout<<"Invalid position"<<" ";
        cout<<"Enter position:";
        cin>>pos;

    }
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"After deletion:";
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
}


