
#include<iostream>
using namespace std;
void userGivenDeletion(int &n,int a[],int pos)
{ int i;

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
}
void beginingDeletion(int &n, int a[])
{
int i;


    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }


    cout<<"begining deletion:";
for(i=0;i<n-1;i++)
{
    cout<<a[i]<<" ";
}
n--;
 cout<<endl;
}
void endingDeletion(int &n, int a[])
{

int i;
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
}
void finaldeletion(int &n,int a[])
  { int i;

   cout<<"final deletion:";
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    }
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

while(pos<1||pos>n)
{
    cout<<"Invalid"<<endl;
    cout<<"Enter a positon:";
cin>>pos;

}

    userGivenDeletion(n,a,pos);
    beginingDeletion(n,a);
    endingDeletion(n,a);
    finaldeletion(n,a);


}
