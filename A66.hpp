//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )
void getinput(int &,int &,int &)
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
}
void maxmin(int,int,int,int &,int &)
{
    int n1,n2,n3;
    int max,min;
    max=min;
    if(n1>n2)
    {
        min=n2;
        if(n2>n3)
            min=n3;
        else
        {
            if(n1<n3)
                max=n3;
        }
    }
    else
    {
        max=n2;
        if(n3>n2)
            max=n3;
        else
        {
            if(n3>n1)
                min=n1;
        }
    }
}