#include <iostream>
#include <Windows.h>

#include "point.hpp"
#include "section.hpp"



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	Point yashapedik;
	yashapedik.Setx(2);
	yashapedik.Sety(7);
	
	Point yashanatural;
	yashanatural.Setx(6);
	yashanatural.Sety(4);

	Section krytoi(yashapedik, yashanatural);
	std::cout << krytoi.Lenght();

	




	return 0;
}


/*
На
floatпиши класс точки 
поля: x;
float y;
Point* next;
Методы:
Геттеры,
Сеттеры,
Place() - выводит x, y в консоль

Напиши класс отрезка
Отрезок 
поля:
Point* first;
Point* second;


Геттеры сеттеры
Напиши класс треугольника
// поля
3 точки
катеты треугольника

Методы: 
Нахождение площади
Нахождение периметра 
Нахождение высоты
Метод, определяющий тип треугольника
Геттеры
Сеттеры
Конструктор, который принимает в себя 3 точки и создает треугольник.

Раздели класс на 2 файла.




*/