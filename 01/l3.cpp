// l3.cpp 

	#include <iostream>
	using namespace std;
	
	int main() {
		int n = 0, k = 0;
		cout << "Введите числовой интервал: ";
		cin >> k;
		
		while (n <= k) {
			if (n % 4 == 3) 
				cout << n;
			else 
				cout << ' ';
			n++;
		}
		
		cout << endl;
		return 0;
	}
