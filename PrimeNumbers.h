#pragma once
#include <iostream>
#include <iomanip>
#include "Set.h" 

// Решето Эратосфена
void PrintPrimes(int n)
{
	Set<int> S;
	int m, k;

	// Вставить все значения 2..n
	for (m = 2; m <= n; m++)
		S.insert(m);

	// Проверка от 2 до sqrt(n)
	for (m = 2; m * m <= n; m++)
	{
		// Eсли m в S, удалить все кратные m из множества
		if (S.isMember(m)) {
			for (k = m + m; k <= n; k += m) {
				if (S.isMember(k)) {
					S.del(k);
				}
			}
		}
	}
			
	// Вывод простых чисел
	size_t count = 1;
	for (m = 2; m <= n; m++) {
		if (S.isMember(m))
		{
			cout << setw(3) << m << " ";

			// Отступ
			if (count++ % 10 == 0) {
				cout << endl;
			}				
		}
	}
	cout << endl;
}
