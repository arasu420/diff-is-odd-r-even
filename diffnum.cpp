#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,m,d=0;
    cout<<"Enter n & m =";
    cin>>n>>m;
    d=abs(n-m);
    if(d%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
}
