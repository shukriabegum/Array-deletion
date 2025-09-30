#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a size:";
    cin>>n;
    int a[n];
    cout<<"Element of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
int pos;
cout<<"Enter a positon:";
cin>>pos;
for(i=pos-1;i<n-1;i++)
{
    a[i]=a[i+1];
}

cout<<"given position deletion:";
for(i=0;i<n-1;i++)
{
    cout<<a[i]<<" ";
} n--;
cout<<endl;

    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }


    cout<<"beggining deletion:";
for(i=0;i<n-1;i++)
{
    cout<<a[i]<<" ";
}
n--;
 cout<<endl;
for(i=0;i<n-1;i++)
{
    a[i];
}

cout<<"ending deletion:";
for(i=0;i<n-1;i++)
{
    cout<<a[i]<<" ";
}
 cout<<endl;
    cout<<"final deletion:";
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
}
