#include <iostream>
#include <string>


class arBuz
{
public:
	arBuz(int ves, std::string cvet, int razmer, std::string forma) {
		_ves = ves;
		_cvet = cvet;
		_razmer = razmer;
		_forma = forma;

	}
	
	void arBuzlezit() {
		std::cout << "arBuz prosto lezit\n";
	}
	void arBuzrastet() {
		std::cout << "arBuzprosyoraste\n";
		_ves++;
		_razmer++;
	}
	
	// геттеры - методы которые позвол€ют посмотреть чему равны пол€

	// сеттеры - это методы которые позвол€ют изменить пол€

	int GetVes() {
		return _ves;
	}
	std::string  GetCvet() {
		return _cvet;
	}

	int GetRazmer() {
		return _razmer;


	}
	std::string GetForma() {
		return _forma;
	}
	void SetVes(int ves) {
		_ves = ves;
	}



	void SetCvet(std::string cvet) {
		_cvet = cvet;
	}

	void SetRazmer(int razmer) {
		_razmer = razmer;

	}

	
	void SetForma(std::string forma){
	
		_forma = forma;
	}

private:

	int _ves;
	std::string _cvet;
	int _razmer;
	std::string  _forma;

};

