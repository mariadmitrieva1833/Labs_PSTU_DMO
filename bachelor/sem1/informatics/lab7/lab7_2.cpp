#include <iostream>
#include <cstdarg>
using namespace std;

double sum(int n, ...)
{
    va_list num;
    va_start(num,n);
    double result = 0.0;
    for (int i = 0;i<n;i++)
    {
        int numer = va_arg(num,int);
        int denom = va_arg(num,int);
        result+=(double)numer/denom;
    }
    va_end(num);
    return result;


}

int main()
{
    cout<<sum(5,1,2,1,4,1,8,1,16,1,32)<<endl;
    cout<<sum(10,1,2,1,4,1,8,1,16,1,32,1,2,1,4,1,8,1,16,1,32)<<endl;
    cout<<sum(12,1,2,1,4,1,8,1,16,1,32,1,2,1,4,1,8,1,16,1,32,1,5,1,10)<<endl;
}
