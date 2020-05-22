#pragma once
#include <iostream>
#include <iomanip>
#include "Set.h" 

// ������ ����������
void PrintPrimes(int n)
{
	Set<int> S;
	int m, k;

	// �������� ��� �������� 2..n
	for (m = 2; m <= n; m++)
		S.insert(m);

	// �������� �� 2 �� sqrt(n)
	for (m = 2; m * m <= n; m++)
	{
		// E��� m � S, ������� ��� ������� m �� ���������
		if (S.isMember(m)) {
			for (k = m + m; k <= n; k += m) {
				if (S.isMember(k)) {
					S.del(k);
				}
			}
		}
	}
			
	// ����� ������� �����
	size_t count = 1;
	for (m = 2; m <= n; m++) {
		if (S.isMember(m))
		{
			cout << setw(3) << m << " ";

			// ������
			if (count++ % 10 == 0) {
				cout << endl;
			}				
		}
	}
	cout << endl;
}
