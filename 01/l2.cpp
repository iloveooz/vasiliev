// l2.cpp 

	#include <iostream>
	using namespace std;
	
	int main() {
		int n = 1;
		while (n <= 100) {
			if (!(n % 2)) 
				cout << ' ';
			else 
				cout << n;
			n++;
		}
		
		cout << endl;
		return 0;
	}
