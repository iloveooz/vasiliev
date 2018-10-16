// l17.cpp 

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
		
		vec[1] = 1; 
		vec[2] = 1;
		
		for (int i = 3; i <= len; i++) vec[i] = vec[i - 1] + vec[i - 2];
		
	}

	// функция для вывода элемента последовательности
	void printOne(const int & c) {
		cout << c << ' ';
	}
