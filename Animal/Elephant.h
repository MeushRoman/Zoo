#pragma once
#include "Animal.h"
class Elephant :
	public Animal
{
	int trankLenght;
public:
	Elephant(string name, string color, int age, int trankLenght);
	void setTrankLenght(int trankLenght);

	int getTrankLenght() const { return trankLenght; }

	string getInfo() const override;
	string voice() const override final;
};

