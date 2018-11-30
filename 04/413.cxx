
	#include <iostream>
	#include <cstdlib>
	
	int WL(char *str) {
		
		int len = 0;
		int max = 0;
		
		for (int i = 0; str[i]; i++) {
			if (str[i] != ' ')
				max++;
			else {
				if ((len < max) || str[i] == '\0') {
					len = max;
					max = 0;
				}
				else
				max = 0;
			}
		}
		
		return len;
	}
	
	int main() {
		
		int lenw = 0;
		
		srand(time(NULL));
		
		char str[20] = "";
		
		for (int i = 0; i < 18; i++) {
			if ((rand() % 10) == 1) 
				str[i] = ' ';
			else
				str[i] = 'A' + rand() % 50;
		}
		
		*str = *str + '\0';
		
		std::cout << str << '\n';
		
		lenw = WL(str);

		std::cout << lenw << '\n';
		
		return 0;
	}
