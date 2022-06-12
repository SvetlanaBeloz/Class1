#include "Cat.h"

int main()
{
	Cat cat;
	
	cat.SetAge(5);
	cat.SetColor("white");
	cat.SetEnergy(50);
	cat.SetIsHungry(false);
	cat.SetName("Barsik");
	cat.SetWeight(3.5);
	cout << cat.GetAge() << "\n";
	cout << cat.GetColor() << "\n";
	cout << cat.GetEnergy() << "\n";
	cout << cat.GetIsHungry() << "\n";
	cout << cat.GetName() << "\n";
	cout << cat.GetWeight() << "\n";

	Cat a;
	cout << a.GetAge() << "\n";
	cout << a.GetColor() << "\n";
	cout << a.GetEnergy() << "\n";
	cout << a.GetIsHungry() << "\n";
	cout << a.GetName() << "\n";
	cout << a.GetWeight() << "\n";

	Cat b("Murzik", 3);
	cout << b.GetAge() << "\n";
	cout << b.GetColor() << "\n";
	cout << b.GetEnergy() << "\n";
	cout << b.GetIsHungry() << "\n";
	cout << b.GetName() << "\n";
	cout << b.GetWeight() << "\n";

	Cat c("black", 2.8, 100);
	cout << c.GetAge() << "\n";
	cout << c.GetColor() << "\n";
	cout << c.GetEnergy() << "\n";
	cout << c.GetIsHungry() << "\n";
	cout << c.GetName() << "\n";
	cout << c.GetWeight() << "\n";

	Cat d("Kotik", 80, true, 6);
	cout << d.GetAge() << "\n";
	cout << d.GetColor() << "\n";
	cout << d.GetEnergy() << "\n";
	cout << d.GetIsHungry() << "\n";
	cout << d.GetName() << "\n";
	cout << d.GetWeight() << "\n";
}