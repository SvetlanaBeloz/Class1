
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
		void SetName(string n);
		void SetColor(string c);
		void SetWeight(double w);
		void SetAge(int a);
		void SetEnergy(int e);
		void SetIsHungry(bool i);

		void Speak();
		void Feed();
		void Print();
		void WakeUp();
		void Play();
		void Hunt();
		void Sleep();
		void FillCat();
};

