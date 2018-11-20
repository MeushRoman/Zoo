#pragma once
#include <string>

using namespace std;

class Animal
{
	string name;
	string color;
	int age;
public:

	Animal(string name, string color, int age);
	void setName(string name);
	void setColor(string color);
	void setAge(int age);

	string getName() const { return name; }
	string getColor() const { return color; }
	int getAge() const { return age; }

	virtual string getInfo() const;
	virtual string voice() const = 0;
};

