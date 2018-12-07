	
	#include <iostream>
	#include <string>
	
	class parallepiped {
	private:
		// поля
		std::string name;
		double width;
		double depth;
		double heigth;
		
		// методы
		
	public:
		// конструктор по умолчанию
		parallepiped() {
			name = "по умолчанию";
			width = 0;
			depth = 0;
			heigth = 0;
			std::cout << "Объект " << name << " создан" << '\n';
		}
		
		// конструктор с четырьмя параметрами
		parallepiped(std::string name, double w, double d, double h) {
			this->name = name;
			width = w;
			depth = d;
			heigth = h;
			std::cout << "Объект " << name << " создан" << '\n';
		}
		
		// отображение полей и объёма
		void show() {
			std::cout << "Название: " << name << '\n';
			std::cout << "Ширина:   " << width << '\n';
			std::cout << "Глубина:  " << depth << '\n';
			std::cout << "Высота:   " << heigth << '\n';
			std::cout << " Объём:   " << volume() << '\n';
			
			for (int i = 0; i < 35; i++) std::cout << "-";
			std::cout << '\n';
		}

		// вычисление объёма параллепипеда
		double volume() {
			return width * depth * heigth;
		}
	
		// деструктор
		virtual ~parallepiped() {
			std::cout << "Объект " << name << " уничтожен" << '\n';
		}
	};
	
	
	
	class realparallepiped : virtual public parallepiped {
	private:
		std::string name;
		double mass;
		
	public:

		// конструктор по умолчанию
		realparallepiped() : parallepiped() {
			name = "реальный (по умолчанию)";
			mass = 0;
			std::cout << "Реальный объект " << name << " создан" << '\n';
		}
		
		// конструктор c четырьмя параметрами
		realparallepiped (std::string name, double w, double d, double h, double m) :
		parallepiped(name, w, d, h) {
			this->name = name;
			mass = m;
			std::cout << "Реальный объект " << name << " создан" << '\n';
		}

		// вычисление плотности 
		double density () {
			if (volume() == 0) {
				return 0;
			}
			else {
				return mass / volume();
			}
		}

		// отображение полей и объёма
		void show() {
			std::cout << "Масса:    " << mass << '\n';
			std::cout << "Плотность:   " << density() << '\n';

		}		

		realparallepiped operator / (int num) {
			std::cout << "Операция деления: " << '\n';
			mass /= num;
			return *this;
		}

		realparallepiped operator + (realparallepiped obj) {
			std::cout << "Операция сложения: " << '\n';
			realparallepiped tmp;
			// tmp.volume() = volume() + obj.volume();
			tmp.mass = mass + obj.mass;
			return tmp;
		}

		// деструктор
		virtual ~realparallepiped() {
			std::cout << "Объект " << name << " уничтожен" << '\n';
		}
	
	};
	
	
	
	int main() {
		
		std::cout << "Пример 7-1" << '\n';
		for (int i = 0; i < 35; i++) std::cout << "-";
		std::cout << '\n';
		
		parallepiped Z;
		Z.show();
		
		parallepiped A("A", 5, 8, 2);
		A.show();

		parallepiped B("B", 1.5, 1.8, 1.2);
		B.show();
		
		realparallepiped rC;
		rC.parallepiped::show();
		rC.show();
		
		realparallepiped rD("rD", 2.5, 2.8, 2.2, 3.33);
		rC.parallepiped::show();
		rD.show();
		
		rD = rD / 2;		
		rD.show();
		
		realparallepiped rE = rC + rD;
		rE.show();
		
		return 0;
		
	}
	
