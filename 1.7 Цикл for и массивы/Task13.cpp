/* Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
Формат входных данных

Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES. */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main() {
    int temp;
    bool cross = false;
    vector <int> x, y;
    for (int i = 1; i <= 8; i++) {
        cin >> temp;
        x.push_back(temp);
        cin >> temp;
        y.push_back(temp);
    }
    for (int i = 0; i < x.size() - 1; i++) {
        for (int j = i + 1; j < x.size(); j++) {
            if (abs(x[i] - x[j]) == abs(y[i] - y[j]) || x[i] == x[j] || y[i] == y[j]) {
                cross = true;
            }
        }
    }
    if (cross) cout << "YES";
    else cout << "NO";
    return 0;
}
