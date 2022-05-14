/* Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
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
    v.push_back(temp);
  }
  vector<int>::iterator it = std::unique (v.begin(), v.end()); 
  v.resize( std::distance(v.begin(),it));
  cout << v.size();  
  return 0;
}
