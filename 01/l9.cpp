	#include <iostream>

	using namespace std;
	int main(){
	 
	   const double ais = 3.0;
	   const double smim = 100.0;
		const double mis = 2.16;
		
	   double ds = 0.0, dar = 0.0, dm = 0.0, dsm = 0.0;

	   cout << "Расстояние в саженях и аршинах." << endl;
	   cout << "Сажени: ";
	   cin >> ds;

	   cout << "Аршины: ";
	   cin >> dar;

		dm = ds * mis;
		

	   cout << "Расстояние в метрах и сантиметрах." << endl;
	   cout << "Метры: " << dm << endl;
	   cout << "Сантиметры: " << dsm << endl;

	   return 0;
	}
