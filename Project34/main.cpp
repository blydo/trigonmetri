#include <iostream>
#include <Windows.h>

#include "point.hpp"
#include "section.hpp"



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	Point yashapedik;
	yashapedik.Setx(6);
	yashapedik.Sety(6);
	
	Point yashanatural;
	yashanatural.Setx(8);
	yashanatural.Sety(8);


	yashanatural.PrintPosition();



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
Методы: 
Print - Выводит первую точку, затем выводит x '-' и y '\n'
Геттеры сеттеры
Напиши класс треугольника




*/