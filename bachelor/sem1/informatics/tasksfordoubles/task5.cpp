#include <iostream>
using namespace std;

int main()
{
    int a1 [7]={3,9,2,5,3,7,9};
    int a2 [7]={3,9,2,5,3,7,9};
    int a3 [7]={3,9,2,5,3,7,9};

    for (int i = 0; i<7;i++)
    {
        int min_ = 10;
        int ind = 0;
        for (int j=i+1;j<7;j++)
        {
            if (a1[j]<min_)
            {
               ind = i;
               min_=a1[j]; 
            }
            int p = a1[i];
            a1[i]=a1[ind];
            a1[ind]=p;
        }

        
    }

    for (int i = 1; i<7;i++)
    {
        int k = a2[i];
        int j = i-1;
        while(j>=0 && a2[j]>k)
        {
            a2[j+1]=a2[j];
            j--;
        }
        a2[j+1] = k;
        
    }
    int i = 0;
    while (i>=0)
    {
        i = 0;
        for (int j = 0;j<6;j++)
        {
            if (a3[j]>a3[j+1])
            {
                int p = a3[j];
                a3[j]=a3[j+1];
                a3[j+1]=p;
                i++;
            }
            
        }
        i--;
    }
    for (int i = 0; i<7; i++)
    {
        cout<<a2[i];
    }
    
    return 0;
}
