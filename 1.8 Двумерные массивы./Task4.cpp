/* Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
Формат входных данных
Программа получает на вход размеры массива n и m, не превосходящие 100, затем элементы массива, затем числа i и j.
Формат выходных данных
Выведите результат. */

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int k = 0; k < n; k++)
		for(int l = 0; l < m; l++)
			cin >> a[k][l];
	int i, j;
	cin >> i >> j;
	for(int k = 0; k < n; k++)
	{
		int buf;
		buf = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = buf;
	}
	for(int k = 0; k < n; k++)
	{
		for(int l = 0; l < m; l++)
			cout << a[k][l] << ' ';
		cout << endl;
	}
	return 0;
}
