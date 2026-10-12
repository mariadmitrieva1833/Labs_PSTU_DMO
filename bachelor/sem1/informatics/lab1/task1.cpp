#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double a = 100.0;
    double b = 0.01;
    //числитель
    cout <<"При работе с типом double"<< endl;
    double ab1 = pow(a-b,4);
    double ab2 = pow(a,4);
    double ab3 = 4*pow(a,3)*b;
    double res1 = ab1-(ab2-ab3);
    cout <<"Числитель:"<<res1<< endl; 
    //знаменатель
    double ab4 = 6*pow(a,2)*pow(b,2);
    double ab6 = 4*pow(b,3)*a;
    double ab7 = pow(b,4);
    double res2 = ab1 - ab2 + ab3;
    cout <<"Знаменатель:"<<res2<< endl; 
    if (res2!=0) {
        cout <<"Результат:"<<res1/res2<< endl; 
    }
    else {
        cout <<"Знаменатель равен нулю. Невозможно получить результат"<< endl; 
    }
    

    cout <<"При работе с типом float"<< endl;
    float A = 100.0;
    float B = 0.01;
    //числитель
    float Ab1 = pow(A-B,4);
    float Ab2 = pow(A,4);
    float Ab3 = 4*pow(A,3)*B;
    float Res1 = Ab1-(Ab2-Ab3);
    cout <<"Числитель:"<<Res1<< endl; 
    //знаменатель
    float Ab4 = 6*pow(A,2)*pow(B,2);
    float Ab6 = 4*pow(B,3)*A;
    float Ab7 = pow(B,4);
    float Res2 = Ab1 - Ab2 + Ab3;
    cout <<"Знаменатель:"<<Res2<< endl; 
    if (Res2!=0) {
        cout <<"Результат:"<<Res1/Res2<< endl; 
    }
    else {
        cout <<"Знаменатель равен нулю. Невозможно получить результат"<< endl; 
    }


    return 0;
}
