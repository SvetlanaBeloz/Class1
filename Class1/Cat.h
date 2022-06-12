
#include <iostream>

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

	Cat()
	{
		SetName("Barsik");
		SetAge(4);
		SetColor("white");
		SetEnergy(50);
		SetIsHungry(0);
		SetWeight(4.5);
	}

	Cat(string n, int a)
	{
		SetName(n);
		SetAge(a);
		SetColor("white");
		SetEnergy(50);
		SetIsHungry(0);
		SetWeight(4.5);
	}

	Cat(string c, double w, int e)
	{
		SetName("Murzik");
		SetAge(3);
		SetColor(c);
		SetEnergy(e);
		SetIsHungry(0);
		SetWeight(w);
	}

	Cat(string n, int e, bool i, int a)
	{
		SetName(n);
		SetAge(a);
		SetColor("white");
		SetEnergy(e);
		SetIsHungry(i);
		SetWeight(4.5);
	}

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

};

