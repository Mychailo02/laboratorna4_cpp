// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "Russian");
    int n, l,sum, k;//об'ява змінних
	std::cout << "Введiть натуральне значення n: ";
	std::cin >> n;
	sum = 0;
	k = int(log10(n)) + 1;//визначення кількості цифр числа
	
	for (int i = 0; i <= k; i++)//обчислення суми цифр числа 
	{
		l = n % 10;//знаходження останньої цифри числа
		sum = sum + l;
		n = n / 10;//прибирання останньої цифри числа 
	}
	
	std::cout <<"Сума цифр числа n дорiвнює: "<< sum;



}


