
	#include <iostream>
	
	int main() {
		
		int ** array = new int *[10];
		
		for (int i = 0; i < 10; i++) 
			array[i] = new int[10];
		
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if ((i == j) || ((i + j) == 9)) 
					array[i][j] = 1;
				else 
					array[i][j] = 0;
			}
		}
			 
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				std::cout << array[i][j] << ' ';
			}
			std::cout << '\n';
		}
		
		return 0;
	}
		
