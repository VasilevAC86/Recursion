# include <iostream>

long long factorial(int num) {
	if (num == 0)
		return 1;
	if (num < 0)
		return 0;
	return factorial(num - 1) * num;
}

int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);	
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задание "Факториал"
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << "! = " << factorial(n) << std::endl;

	// Задача 1. Число Фибоначчи
	std::cout << "Задача 1: Число Фибаначчи по номеру.\nВведите номер числа Фибоначчи -> ";
	std::cin >> n;
	std::cout<<"Число Фибоначчи = "<<fibonacci(n)<<"\n\n";
	std::cout << "Первые 13 чисел Фибоначчи:\n";
	for (short i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ", ";
	std::cout << "\b\b \n";
	

	return 0;
}