#include <iostream>
using namespace std;

class Cat
{
public:
	string name;
	string color;
	double weight;
	int age;
	int energy;
	bool is_hungry;

	void Speak()
	{
		cout << "Cat says meow" << "\n";
	}

	void Feed()
	{
		if (energy == 0)
			cout << "Cat is dead" << "\n";
		else if (energy >= 100)
			cout << "Cat is full of energy and happy, do not need to be feeded" << "\n";
		if (is_hungry && energy < 100 && energy > 0) {
			cout << "Cat is eating" << "\n";
			weight += 0.2;
			energy += 10;
			is_hungry = false;
			Speak();
		}
	}

	void Print()
	{
		if (energy == 0)
		{
			cout << "Cat's name was " << name << "\n";
			cout << "Cat's color was " << color << "\n";
			cout << "Cat's age was " << age << "years" << "\n";
			cout << "Cat's weight was " << weight << " kilos" << "\n";
		}
		else {
			cout << "Cat's name is " << name << "\n";
			cout << "Cat's color is " << color << "\n";
			cout << "Cat's age is " << age << " years" << "\n";
			cout << "Cat's weight is " << weight << " kilos" << "\n";
			cout << "Cat's energy is " << energy << "\n";
			if (is_hungry && energy > 0 && energy < 100)
				cout << "Cat is hungry" << "\n";
			else if (!is_hungry && energy > 0 && energy < 100)
				cout << "Cat is not hungry" << "\n";
		}
	}
};

int main()
{
	Cat cat;
	cat.name = "Barsik";
	cat.age = 2;
	cat.is_hungry = true;
	cat.weight = 5;
	cat.energy = 50;
	cat.color = "white";
	cat.Feed();
	cat.Print();
}