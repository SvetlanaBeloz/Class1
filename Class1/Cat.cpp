#include "Cat.h"

void Cat::SetAge(int a)
{
	if (a > 0 && a <= 18)
		age = a;
	else {
		cout << "Incorrect value of parametr age!\n";
		age = 5;
	}
}

void Cat::SetColor(string c)
{
	color = c;
}

void Cat::SetEnergy(int e)
{
	if (e >= 0 && e <= 100)
		energy = e;
	else {
		cout << "Incorrect value for parameter energy!\n";
		energy = 50;
	}
}

void Cat::SetIsHungry(bool i)
{
	is_hungry = i;
}


void Cat::SetName(string n)
{
	name = n;
}

void Cat::SetWeight(double w)
{
	if (w >= 0 && w <= 12)
		weight = w;
	else {
		cout << "Incorrect value for parameter weight!\n";
		weight = 5;
	}
}

string Cat::GetName() const
{
	return name;
}

string Cat::GetColor() const
{
	return color;
}

double Cat::GetWeight() const
{
	return weight;
}

int Cat::GetAge() const
{
	return age;
}

int Cat::GetEnergy() const
{
	return energy;
}

bool Cat::GetIsHungry() const
{
	return is_hungry;
}

void Cat::Speak()
{
	cout << name << " says meow" << "\n";
}

void  Cat::Feed()
{
	if (energy == 0)
		cout << name << " is dead" << "\n";
	else if (energy >= 100)
		cout << name << " is full of energy and happy, do not need to be feeded" << "\n";
	if (is_hungry && energy < 100 && energy > 0) {
		cout << name << " is eating" << "\n";
		weight += 0.2;
		energy += 10;
		is_hungry = false;
		Speak();
	}
}

void  Cat::Print()
{
	if (energy == 0)
	{
		cout << "Cat's name was " << name << "\n";
		cout << name << "'s color was " << color << "\n";
		cout << name << "'s age was " << age << "years" << "\n";
		cout << name << "'s weight was " << weight << " kilos" << "\n";
	}
	else {
		cout << "Cat's name is " << name << "\n";
		cout << name << "'s color is " << color << "\n";
		cout << name << "'s age is " << age << " years" << "\n";
		cout << name << "'s weight is " << weight << " kilos" << "\n";
		cout << name << "'s energy is " << energy << "\n";
		if (is_hungry && energy > 0 && energy < 100)
			cout << name << " is hungry" << "\n";
		else if (!is_hungry && energy > 0 && energy < 100)
			cout << name << " is not hungry" << "\n";
	}
}

void  Cat::WakeUp()
{
	cout << name << " woke up" << "\n";
	is_hungry = true;
	energy = 80;
	weight -= 0.1;
}

void  Cat::Play()
{
	if (!is_hungry && energy >= 25 && energy <= 100) {
		cout << name << " is playing" << "\n";
		energy -= 20;
	}
	else
		cout << name << " does not want to play, need to be feeded" << "\n";
}

void  Cat::Hunt()
{
	srand(time(0));
	int probability = rand() % 3;
	if (energy > 10 && energy <= 100)
		cout << name << " is hunting" << "\n";
	else
		cout << name << " is not ready for hunting, needs to sleep" << "\n";
	if (probability == 2)
		cout << "The hunt is successful, " << name << " caught the prey" << "\n";
	else
		cout << "The hunt is not successful" << "\n";
}

void  Cat::Sleep()
{
	cout << name << " is sleeping" << "\n";
}



void  Cat::FillCat()
{
	cout << "Enter name of cat" << "\n";
	cin >> name;
	cout << "Enter color of cat" << "\n";
	cin >> color;
	cout << "Enter weight of cat" << "\n";
	cin >> weight;
	cout << "Enter age of cat" << "\n";
	cin >> age;
	cout << "Enter energy of cat" << "\n";
	cin >> energy;
	cout << "Enter is cat hungry or not" << "\n";
	cin >> is_hungry;

}
