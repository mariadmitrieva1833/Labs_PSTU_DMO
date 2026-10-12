#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int m,n;
    cin >>m;
    cin >>n;
    //1) n++*m
    int res1 = n++*m;
    cout <<res1<< endl;

    //2) n++<m
    int res2 = n++<m;
    cout <<res2<< endl;

    //3) m-->m
    int res3 = m-->m;
    cout <<res3<< endl;

    return 0;

}
