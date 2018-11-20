#include "Elephant.h"

Elephant::Elephant(string name, string color, int age, int trankLenght)
	:Animal(name, color, age)
{
	this->trankLenght = trankLenght;
}

void Elephant::setTrankLenght(int trankLenght)
{
	this->trankLenght = trankLenght;

}

string Elephant::getInfo() const
{
	string info = Animal::getInfo();
	info += ("\ntrank lenght: " + to_string(trankLenght)) + "\n\n";
	return info;
}

string Elephant::voice() const
{
	return string("U-u-u-u-u");
}
