// l4.cpp 

	#include <iostream>
	#include <vector>
	
	using namespace std;
	
	int main() {
		
		void fib(int);
		
		int k = 0;
		cout << "Введите количество выводимых чисел: ";
		cin >> k;
		
		fib(k);
		
		cout << endl;
		return 0;
	}

	void fib(int k) {
		if (k <= 2) cout << 1;
		
		vector<int> dp(k + 1);
		
		dp[1] = 1; 
		dp[2] = 1;
		
		for (int i = 3; i <= k; i++) dp[i] = dp[i - 1] + dp[i - 2];
		for (int i = 1; i <= k; i++) cout << dp[i] << ' ';
	}
