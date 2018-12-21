
	#include <iostream>
	
	
	class Random {
		private:
			int rnd;
		public:
			Random () {
				rnd = rand() % 100;
			}
			
			void show() {
				std::cout << "Случайное значение " << rnd << std::endl;
			}
	};
	
	
	int main() {
		srand(time(NULL));

		Random A;
		A.show();
		
		Random B;
		B.show();
		
		Random C[10];
		for (int i = 0; i < 10; i++) {
			std::cout << (i + 1) << ' ';
			C[i].show();
		}
		
		return 0;
	}
	
