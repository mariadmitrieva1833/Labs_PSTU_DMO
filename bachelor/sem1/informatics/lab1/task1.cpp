#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a = 100.0;
    double b = 0.01;
    //double
    cout <<"При работе с типом double"<< endl;
    double res1 = pow(a-b,4)-(pow(a,4)-4*pow(a,3)*b);
    double res2 = 6*pow(a,2)*pow(b,2)-4*pow(b,3)*a+pow(b,4);
    if (res2!=0) {
        cout <<"Результат:"<<res1/res2<< endl; 
    }
    else {
        cout <<"Знаменатель равен нулю. Невозможно получить результат"<< endl; 
    }
    
    cout <<"При работе с типом float"<< endl;
    float A = 100.0;
    float B = 0.01;
    //float
    float Res1 = pow(A-B,4)-(pow(A,4)-4*pow(A,3)*B);
    float Res2 = 6*pow(A,2)*pow(B,2)-4*pow(B,3)*A+pow(B,4)
    if (Res2!=0) {
        cout <<"Результат:"<<Res1/Res2<< endl; 
    }
    else {
        cout <<"Знаменатель равен нулю. Невозможно получить результат"<< endl; 
    }


    return 0;
}
