#include <iostream>
using namespace std;

struct fract
{
    int num;
    int denom;
};


float times(float x, float y)
{
    return x*y;
}

fract times(fract x,fract y)
{
    fract result;
    result.num = x.num*y.num;
    result.denom = x.denom*y.denom;
    return result;
}

int main()
{
    float a1=0.213;
    float a2=0.45;
    fract b1= {5,6};
    fract b2= {2,3};
    fract res= times(b1,b2);
    cout<<times(a1,a2)<<endl;
    cout<<res.num<<'/'<<res.denom<<endl;
}
