/* Дано число n, не превосходящее 10, и массив размером n × n. Проверьте, является ли этот массив симметричным относительно главной диагонали. 
Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае. */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for(int k = 0; k < n; k++)
		for(int l = 0; l < n; l++)
			cin >> a[k][l];
	bool boo = true;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(i != j)
				if(a[i][j] != a[j][i])
				{
					boo = false;
					break;
				}
	if(boo)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
