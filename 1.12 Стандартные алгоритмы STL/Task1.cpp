/* Отсортируйте массив.

Входные данные

Первая строка входных данных содержит количество элементов в массиве N ≤ 105. Далее идет N целых чисел, не превосходящих по абсолютной величине 109.

Выходные данные

Выведите эти числа в порядке неубывания. */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;

        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        cout << v[i] << ' ';
    }

    return 0;
}
