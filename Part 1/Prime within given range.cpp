#include<iostream>
using namespace std;
int main()
{
    int n1,n2;bool b;
    cout<<"Enter 2 numbers for prime number generation : ";
    cin>>n1>>n2;
    while(n1<n2)
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
        cout<<n1<<"\t";
        n1++;
    }
  
}
