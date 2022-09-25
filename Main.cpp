//Этот проект создан с помощью классического шаблона
#include <iostream>

inline double average(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}

int max(int max1, int max2, int max3) {
	int max;
	std::cout << "Тип данных = INT\n";
	if (max1 > max2 && max1 > max3)
		max = max1;
	else if (max2 > max1 && max2 > max3)
		max = max2;
	else
		max = max3;

	return max;

}
double max(double max1, double max2, double max3) {
	double max;
	std::cout << "Тип данных = DOUBLE\n";
	if (max1 > max2 && max1 > max3)
		max = max1;
	else if (max2 > max1 && max2 > max3)
		max = max2;
	else
		max = max3;

	return max;

}
short max(short max1, short max2, short max3) {
	short max;
	std::cout << "Тип данных = SHORT\n";
	if (max1 > max2 && max1 > max3)
		max = max1;
	else if (max2 > max1 && max2 > max3)
		max = max2;
	else
		max = max3;

	return max;

}

template <typename T>
	T min_arr(T arr[], const int length) {
	return arr[0] < (arr[1] < arr[2] ? arr[1] : arr[2]) ?
		arr[0] : (arr[1] < arr[2] ? arr[1] : arr[2]);;
}




int main() {
	setlocale(LC_ALL, "Russian");
	double m, n, x;
	

	std::cout << "Задание 1.\nВведите 3 числа: \n";
	std::cin >> m >> n >> x;
	std::cout << "Среднее арифметическое чисел " << m << ", " << n << ", " << x << " равно " << average(m, n, x) << ". \n\n";




	std::cout << "Задание 2. Максимум из трех чиел и перегруженная функция.\n";
	int a, b, c;
	std::cout << "Введите 3 целых числа: \n";
	std::cin >> a >> b >> c;
	std::cout << "Максимальное число из трех чисел " << a << ", " << b << ", " << c << " равно: " << max(a, b, c) << ".\n\n";
	double a1, b1, c1;
	std::cout << "Введите 3 дробных числа числа: \n";
	std::cin >> a1 >> b1 >> c1;
	std::cout << "Максимальное число из трех  " << a1 << ", " << b1 << ", " << c1 << " равно: " << max(a1, b1, c1) << ".\n\n";
	short a2, b2, c2;
	std::cout << "Введите 3 целых числа числа: \n";
	std::cin >> a2 >> b2 >> c2;
	std::cout << "Максимальное число из трех  " << a2 << ", " << b2 << ", " << c2 << "равно: " << max(a2, b2, c2) << ".\n\n";
	


	std::cout << "Задание 3. Минимальный элемент массива.\n";
	const int size = 3;
	std::cout << "Массив, заполненный числами: 13, 10, 8.\n";
	int arr[size]{ 13, 10, 8 };
	std::cout << "Минимальный элемент в массиве " << min_arr(arr, size) << ".\n\n";
	
















	return 0;
}