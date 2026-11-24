#include <iostream>
#include <cmath>
using namespace std;
int factorial(int x) {
    if(x == 0) 
    {
        return 1;
    }
    if(x == 1) 
    {
        return 1;
    }
    return x * factorial(x - 1);
}
double num(double x)
{
    double sum = 1;
    for(int i = 1; i<=10; i++)
    {
        double p1 = (2*i+1);
        double f = factorial(i);
        double p2 = p1/f;
        double p = p2*pow(x,2*i);
        sum+=p;
    }
    return sum;
}
double eps(double x)
{
    double sum = 1;
    float e = 0.0001;
    float p = 1;
    for(int i = 1;p >= e; i++)
    {
        double p1 = (2*i+1);
        double f = factorial(i);
        double p2 = p1/f;
        p = p2*pow(x,2*i);
        sum+=p;
    }
    return sum;
}
double exact(double x)
{
    double e =exp(pow(x,2));
    return (1+2*pow(x,2))*e;
}
int main()
{
    float st = (1 - 0.1) / 10;
    for(float x = 0.1;x <= 1.01;x+=st)
    {
        double SN = num(x);
        double SE = eps(x);
        double Y = exact(x);
        cout << "X=" << x 
             << "   SN=" << SN 
             << "   SE=" << SE 
             << "   Y=" << Y << endl;
    }
    return 0;
}
