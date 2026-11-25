#include <iostream>
using namespace std;

void sort(int x, int *a)
{
    for (int i = 1; i<5;i++)
    {
        int k = a[i];
        int j = i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = k;
    }
}

int CHECK(int x, int a[])
{
    bool isAsc=true;
    bool isDesc=true;

    for (int i = 0; i<x-1; i++)
    {
        if (a[i]>a[i+1])
        {
            isAsc=false;
        }
        if (a[i]<a[i+1])
        {
            isDesc=false;
        }
    }
    if (isAsc)
    {
        return 1;
    }
        if (isDesc)
    {
        return -1;
    }
    return 0;
}

int main()
{
    const int m = 5;
    const int n = 5;
    int A[m][n]={
        {1,2,3,4,5},
        {5,4,3,2,1},
        {2,2,2,2,2},
        {9,2,6,2,4},
        {2,5,1,7,3}
    };
    for (int i = 0; i < m; i++) 
    {
        if (CHECK(n,A[i])==0)
        {
            sort(m,A[i]);
        }
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}
