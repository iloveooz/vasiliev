
	#include <iostream>
	
	const int N = 10;
	
	class digitMassiv {
		private:
			static int id;
			double A[N];
			
		public:
			// конструктор без параметров
			digitMassiv() {
				id++;
				for (int i = 0; i < N; i++) {
					A[i] = N - i;
				}
			}
			
			// операторный метод []
			double & operator [] (int number) {
				return A[number - 1];
			}
			
			// возвращает поле id
			int showId() {
				return id;
			}
	};
	
	int digitMassiv::id = 0;
	
	int main() {
		
		digitMassiv coord;
		
		std::cout << coord[5] << std::endl;
		std::cout << coord.showId() << std::endl;
		
		return 0;
	}
