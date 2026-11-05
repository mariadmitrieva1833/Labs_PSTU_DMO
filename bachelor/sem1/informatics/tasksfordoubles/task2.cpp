#include <iostream>
using namespace std;

int main()
{
    int A [10]={1,2,1,1,3,5,9,3,9,3};
    int min_=70;
    int max_=0;
    int firstmin_=0;
    int firstmax_=0;
    int countmin_=0;
    int countmax_=0;
    for(int i = 0;i<10;i++)
    {
        int p = A[i];
        if (p>max_)
        {
            max_=p;
            firstmax_=i;
            countmax_=1;
        }
        else if (p==max_)
        {
            countmax_++;
        }
        if (p<min_)
        {
            min_=p;
            firstmin_=i;
            countmin_=1;
        }
        else if (p==min_)
        {
            countmin_++;
        }
    }
    cout<<max_<<" "<<firstmax_<<" "<<countmax_<<endl<<min_<<" "<<firstmin_<<" "<<countmin_<<endl;
}
