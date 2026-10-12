#include <iostream>
#include <cmath>

using namespace std;

long factorial(int x) {
    int n = 1;
    do{
        n *=x;
        x--;
    }while(x>1);
    return n;
}

int main() {
    double x = 0;
    int i = 1;
    float E = pow(10,-4);
    double result = 0;

    do{
        x = factorial(i)/pow(i,i);
        result+=x;
        i+=1;
    }while(fabs(x)>=E);
    cout<<result<< endl;

    return 0;
}
