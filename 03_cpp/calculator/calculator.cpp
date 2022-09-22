#include<iostream>
using namespace std;

int main()
{
    int FirstNumber;
    int SecondNumber;
    int sum;

    char Operation;

    cout << "Введите 1-ое число" <<"\n";
    cin >> FirstNumber;
    cout << "Введите 2-ое число" << "\n";
    cin >> SecondNumber;

    cout << "Выберите одну из операций: +, -, *, /, ^" << "\n";
    cin >> Operation;

    if (Operation == '+')
    {
        sum = FirstNumber + SecondNumber;
        cout << "Сумма чисел = " << sum << "\n";
    }
    
    return 0;
}