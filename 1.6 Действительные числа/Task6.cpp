/* Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных

Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cnt = 0;
    int num, seq = 0;

    while (cin >> num && num != 0) {
        seq += num;
        ++cnt;
    }

    cout << setprecision(11);
    cout << static_cast<double> (seq) / cnt;

    return 0;
}
