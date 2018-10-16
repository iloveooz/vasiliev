// l12.cpp 

	#include <iostream>
	
	using namespace std;
	
	int main() {
		
		int SUM(int);
		
		int k = 0;
		cout << "Введите количество суммируемых чисел: ";
		cin >> k;
		
		cout << SUM(k);
		
		cout << endl;
		return 0;
	}

	int SUM(int k) {
		int sum = 0;
		
		while (k >= 0) {
			sum += k;
			k--;
		}
		
		return sum;
	}
