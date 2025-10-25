#pragma once 




class Russia
{
public:
	Russia();
	~Russia();

	// Геттеры 
	float GetSquare();
	bool  GetKrymNash();



	// Сеттеры

private:
	const bool Z = true;
	float square;
	bool krymNash;
	float corruptionInMoscow;

};

