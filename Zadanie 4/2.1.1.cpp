﻿#include <iostream> //Подключение библиотеки iostream для ввода-вывода потока
using namespace std; //Подключение пространства имен
int i = 1, t; //Инициализация переменной i со значением 1
int main() //Работа с главной функцией
{
	t = ++i * i++; //Перемножение префиксного инкремента числа i и постфиксного
	cout << t; //Вывод получившегося числа t
	return 0; //Возвращение функции кода выхода 0, что означает "без ошибок"
}