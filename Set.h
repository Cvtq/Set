#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Set
{
private:
	vector<unsigned short> _v;

public:

	Set() {
		_v.resize(1);
	}

	// Вставка элемента
	void insert(T value) {
		if (int(value) >= 0) {
			if (_v.size() < int(value)) {
				_v.resize(int(value) + 1);
			}
			_v[int(value)] = 1;
		}
	}

	// Проверка наличия элемента в наборе
	bool isMember(T value) {
		if (int(value) < 0) {
			return false;
		}

		if (_v.size() < int(value)) {
			return false;
		}

		return bool(_v[int(value)]);
	}

	// Удаление элемента из набора
	void del(T value) {
		if (int(value) >= 0) {
			if (_v.size() < int(value)) {
				return;
			}
			_v[int(value)] = 0;
		}
	}

	// Вывод элемента
	void print() {		
		for (size_t i = 0; i < _v.size(); i++){
			if (_v[i] == 1) {
				cout << i << " ";
			}		
		}
		cout << endl;
	}
};

