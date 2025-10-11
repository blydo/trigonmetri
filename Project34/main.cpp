#include <iostream>
#include "medved.cpp"
#include <Windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	arBuz arBuzperdeznik(5,"zeleny", 15, "krugli");
	arBuzperdeznik.arBuzlezit();
	arBuzperdeznik.arBuzrastet();


	std::cout << arBuzperdeznik.GetVes();




	return 0;
}