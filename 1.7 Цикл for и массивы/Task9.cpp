/* Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
 
int main()
{
    int siz;
    cin>> siz;
    if(siz > 0)
    {
        int* arr = new int[siz];
        for(int i = 0; i < siz; ++i)
        {
            if(i % 2 == 0 && i + 1 < siz)
            {
                cin >> arr[i + 1];
            }
            else if(i % 2)
            {
                cin >> arr[i - 1];
            }
            else
            {
                cin >> arr[i];
            }
        }
 
        for(int i = 0; i < siz; ++i)
        {
            cout << arr[i] << " ";
        }
 
        delete[] arr;
    }
    return 0;
}
