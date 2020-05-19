#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int n,len,a=2,c=1;bool b;
    string st;
    cout<<"Enter the nth prime number to be found :";
    cin>>n;
    while(c<=n)
    {
        b = false;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                b = true;
                break;
            }
            
        }
       
        if(b == false)
        {
            
            if(c==n)
            {
                cout<<endl<<a;
                 exit(0);
            }
           
            c++;
            
        }
        
        a++;
    }

}
