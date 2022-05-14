/* Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
  // put your code here
  int n;  
  cin >> n;
  vector <int> v;  
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp % 2 != 0) v.push_back(temp);
  }
  vector<int>::iterator i = min_element(v.begin(),v.end());
  if (i == v.end()) cout << 0;
  else cout << *i; 
  return 0;
}
