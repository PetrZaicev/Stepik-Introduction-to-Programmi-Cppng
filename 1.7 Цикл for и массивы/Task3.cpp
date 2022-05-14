/* Найдите количество положительных элементов в данном массиве.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.*/

#include <iostream>

#include <vector>

using namespace std;

int main() {

   int n,c=0;

   cin >> n;

   vector <int> a;

   for (int i = 0; i < n; i++) {

       int temp;

       cin >> temp;

       a.push_back(temp);

   }

   for (int i = 0; i < n; i++) {

       if (a[i] > 0) {

           c = c + 1;

       }

   }

   cout << c;

   return 0;

}
