// l15.cpp 

	#include <iostream>
	#include <vector>
	#include <algorithm>
	
	using namespace std;
	
	int main() {
		
		void crVector(vector<int> &);
		void printOne(const int &);
		
		int k = 0;

		cout << "Сколько элементов записать в массив: ";
		cin >> k;
		
		vector<int> mas(k);
		
		crVector(mas);
		
		for_each(mas.begin(), mas.end(), printOne);
		
		cout << endl;
		return 0;
	}

	void crVector(vector<int> & vec) {
		int len = vec.size();

		for (int i = 0; i <= len; i++) vec[i] = i * 2 + 1;
		
	}

	// функция для вывода элемента последовательности
	void printOne(const int & c) {
		cout << c << ' ';
	}
