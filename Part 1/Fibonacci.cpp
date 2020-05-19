#include<iostream>
using namespace std;
int main()
{
    int n,n1,choice;
    char c;
    do
    {
        cout<<"\n1)Display fibonacci series from given 2 numbers of the series\n2)Display fibonacci series from nth place\n";
        cin>>choice;
        cout<<"Enter the range of numbers :";
        cin>>n;
        int x[n+2];
        switch(choice)
        {
            case 1: cout<<"\nEnter 2 consecutive numbers of the series :";
                    cin>>x[0]>>x[1];
                    cout<<"\nFibonacci series : ";
                    cout<<x[0]<<","<<x[1]<<",";
                    for(int i=2;i<n+2-1;i++)
                    {
                        x[i]=x[i-1]+x[i-2];
                        cout<<x[i]<<",";
                    }
                    cout<<x[n+2];
                    break;
            case 2: cout<<"\nEnter nth place for the series to start:";
                    cin>>n1;
                    int y[n1+n];
                    y[0]=0;y[1]=1;
                    for(int i=2;i<n+n1+10;i++)
                    y[i]=y[i-1]+y[i-2];
                    cout<<"\nFibonacci series : ";
                    for(int i=n1;i<n+n1;i++)
                    cout<<y[i]<<",";
                    cout<<y[n+n1];
                    break;
                    
        }
                    cout<<"\nContinue process? ( y/n )";
                    cin>>c;
    }while(c=='y'||c=='Y');
    
}
