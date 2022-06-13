
#include <iostream>
#include <algorithm>
using namespace std;

class Cat
{
private:
	string name;
	string color;
	double weight;
	int age;
	int energy;
	bool is_hungry;

public:

	Cat();
	Cat(string n);
	Cat(string n, int a);
	Cat(string n, int a, string c);
	Cat(string n, int a, string c, double w);
	Cat(string n, int a, string c, double w, int e);
	Cat(string n, int a, string c, double w, int e, bool i);


	void SetName(string n);
	void SetColor(string c);
	void SetWeight(double w);
	void SetAge(int a);
	void SetEnergy(int e);
	void SetIsHungry(bool i);

	string GetName() const;
	string GetColor() const;
	double GetWeight() const;
	int GetAge() const;
	int GetEnergy() const;
	bool GetIsHungry() const;

	void Speak();
	void Feed();
	void Print();
	void WakeUp();
	void Play();
	void Hunt();
	void Sleep();
	void FillCat();
	void Show();

};

