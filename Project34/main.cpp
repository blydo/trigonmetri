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
��
float���� ����� ����� 
����: x;
float y;
Point* next;
������:
�������,
�������,
Place() - ������� x, y � �������

������ ����� �������
������� 
����:
Point* first;
Point* second;
������: 
Print - ������� ������ �����, ����� ������� x '-' � y '\n'
������� �������
������ ����� ������������




*/