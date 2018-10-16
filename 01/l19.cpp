// l19.cpp 

	#include <iostream>
	#include <vector>
	#include <algorithm>
		
	using namespace std;

	void crVector(vector<int> & vec) {
		int len = vec.size();
		
		for (int i = 0; i <= len; i++) {
			if (i % 2 == 0) 
				vec[i] = i;
			else
				cin >> vec[i];
		}
	}

	// функция для вывода элемента последовательности
	void printOne(const int & c) {
		cout << c << ' ';
	}
	
	int main() {
		int k = 0;

		cout << "Сколько элементов записать в массив: ";
		cin >> k;
		
		vector<int> mas(k);
		
		crVector(mas);
		
		for_each(mas.begin(), mas.end(), printOne);
		
		cout << endl;
		return 0;
	}


