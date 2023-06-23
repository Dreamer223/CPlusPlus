#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main ()
{
    double num1,num2;
    char operatin;
    cout << "Введите свое выражение: ";
    cin >> num1 >> operatin >>  num2 ;
    switch (operatin)
    {
    case '+':
        cout << "Cумма равна "<< num1+num2;
        break;
    case '*':
        cout << "Произведение равно "<< num1*num2;
        break;
    case '-':
        cout << "Вычитание равна "<< num1-num2;
        break;
    case '/':
        cout << "Деление равна "<< num1/num2;
        break;
    
    default:
        cout << "Ошибка: неверная операция!";
        break;
    }
}

