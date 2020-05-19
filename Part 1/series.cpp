#include<iostream>
using namespace std;
int main()
{
    int n,range;bool b;
    cout<<"Enter a range between which the number is to be fetched :";
    cin>>range;
    int a[range];
    a[0]=1;
    a[1]=2;
    a[2]=1;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=4;i<=n+1;i=i+2)
    {
        a[i]=a[i-2]+a[i-4];
    }
    int n1=3;int m=3;
    while(n1<range)
    {
        
        b = false;
        for(int i=2;i<=n1/2;i++)
        {
            if(n1%i==0)
            {
                b = true;
                break;
            }
            
        }
        if(b == false)
        {
             a[m]=n1;
             m=m+2;
        }
       
        n1++;
        
    }
    for(int i=0;i<n+5;i++)
    cout<<a[i]<<",";
    cout<<a[n+5];
    cout<<"\nNumber at "<<n<<"th position is "<<a[n-1];
    
}
