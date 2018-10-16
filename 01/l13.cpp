// l13.cpp 

	#include <iostream>
	
	using namespace std;
	
	int main() {
		
		int SUModd(int);
		
		int k = 0;
		cout << "Введите число, до которого нужно посчитать все нечётные: ";
		cin >> k;
		
		cout << SUModd(k);
		
		cout << endl;
		return 0;
	}

	int SUModd(int k) {
		int sum = 0;
		
		while (k >= 0) {
			if (k % 2 != 0) { 
				sum += k;
				// cout << k << ' ';
			}
			k--;
		}
		
		return sum;
	}
