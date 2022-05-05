/*Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

Формат входных данных
Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Формат выходных данных
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3], b[3],c=0,f=0,s=0;
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    sort(a, a + 3);
    sort(b, b + 3);
    for (int i = 0;i < 3;i++) {
        if (a[i] == b[i])c++;
        else if (a[i] > b[i])f++;
        else if (a[i] < b[i])s++;
    }
    if (c == 3)
        cout << "Boxes are equal";
    else if (!f&&s)
        cout << "The first box is smaller than the second one";
    else if (f&&!s)
        cout << "The first box is larger than the second one";
    else cout << "Boxes are incomparable";
    cin.get(), cin.get();
    return 0;
}
