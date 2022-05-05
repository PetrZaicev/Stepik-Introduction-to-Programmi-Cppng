/*Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.

Формат входных данных
Вводятся два числа.
Формат выходных данных
Выведите ответ на задачу.*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a>> b;
    if (a > b){
        cout << a << endl;
    }
    else if (a == b)
    {
        cout << b << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}
