
	#include <iostream>
	#include <cstdlib>
	
	int& sort(int* M, int n) {
		
		int temp = 0;
				
		for (int i = 0; i < n - 1; i++) { 
			for (int j = 0; j < n - 1; j++) {
				if (M[j] < M[j + 1]) {
					temp = M[j + 1];
					M[j + 1] = M[j];
					M[j] = temp;
				}
			}
		}
		
		return M[n - 1];
	}
		
	int main() {
		
		srand(time(0));
		
		const int size = 10;
				
		int M[size] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		
		for (int &element : M) 
			element = rand() % 10;
		
		for (int &element : M)
			std::cout << element << ' ';
		
		int &min = sort(M, size);
		std::cout << '\n';

		for (int &element : M)
			std::cout << element << ' ';
		
		std::cout << '\n' << min << '\n';
		return 0;
	}
