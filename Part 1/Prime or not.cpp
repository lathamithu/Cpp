#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime number";
            exit(0);
        }
    }
    cout<<n<<" is a prime number";
}
