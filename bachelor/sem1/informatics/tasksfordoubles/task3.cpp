#include <iostream>
using namespace std;

int main()
{
    int x [10];
    for(int i=0; i<10;i++)
    {
        cin>>x[i];
    }
    bool f = true;
    for (int i = 0;i<10-1 && f==true;i++)
    {
        if (x[i]>x[i+1])
        {
            f = false;
        }
    }
    cout<<f<<endl;
}
