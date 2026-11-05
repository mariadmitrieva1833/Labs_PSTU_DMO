#include <iostream>
using namespace std;

int main()
{
    int m[3][3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int sum_[3] = {0,0,0};
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            sum_[i]+=m[i][j];
        
        }
    }
    for(int i = 0; i<3; i++)
    {
        cout<<sum_[i]<<endl;
    }
    return 0;
}