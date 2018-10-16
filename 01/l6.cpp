	#include <iostream>

	using namespace std;
	int main(){
		double km = 0, m = 0, kk = 1.609344;
		
		cout << "Введите мили: ";
		cin >> m;
		
		km = m / kk;
		
		cout << "Километры: " << km << endl;

		return 0;
	}

