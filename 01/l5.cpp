	#include <iostream>

	using namespace std;
	int main(){

		// Константа для определения размера массива:
		int n = 0;
		
		// Индексная переменная:
		int k = 0;
		
		cout << "Введите переменную: ";
		cin >> n;
		
		// Первый элемент массива:
		int bnm = 1;
		
		cout << bnm;
		
		// Оператор цикла для заполнения массива: 
		while(k < n) {
			// Значение элемента массива:
			bnm = bnm * (n - k) / (k + 1);
		
			// Отображение значения элемента массива:
			cout << " " << bnm;
		
			// Изменение значения индексной переменной:
			k++ ;
		}
		
		cout << endl;

		return 0;
	}
