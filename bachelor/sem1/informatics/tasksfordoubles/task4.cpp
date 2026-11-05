#include <iostream>
using namespace std;

int main()
{
    int A [5][5]={
        {3,6,5,2,32},
        {1,3,4,0,2},
        {8,3,11,7,2},
        {7,0,9,14,5},
        {8,9,16,5,3}
    };
    int row = 0;
    int line = 0;
    int max_=0;
    for(int i = 0; i<5; i++)
    {
        for (int j = 0; j<5; j++)
        {
            if (max_<A[i][j])
            {
                row = j;
                line = i;
                max_=A[i][j];
            }
        }
    }
    cout<<line<<" "<<row<<endl;
    return 0;
}
