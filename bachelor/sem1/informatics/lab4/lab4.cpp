#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int N = 50;
    int A[N];
    int n = 30;
    for (int i = 0; i<n; i++)
    {
        A[i]=rand()%101 - 50;
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i = n-1; i>=n-5;i--)
    {
        A[i]=0;
    }
    n = n-5;

    int B[3]={0,0,0};
    for (int i = 0;i<2;i++)
    {
        B[i]=A[i+1]+2;
    }
    for (int i = n-1; i>=0; i--)
    {
        A[i+3]=A[i];
        A[i]=0;
    }
    n+=3;
    for (int i = 0;i<3;i++)
    {
        A[i]=B[i];
    }
    for (int i = 0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
