#include "Cat.h"

int main()
{
	Cat cat;
	
	// Main flow
	cat.SetAge(5);
	cat.SetColor("white");
	cat.SetEnergy(60);
	cat.SetIsHungry(0);
	cat.SetName("Barsik");
	cat.SetWeight(3.5);
	cat.Print();
	cat.Feed();
	cat.WakeUp();
	cat.Play();
	cat.Feed();
	cat.Play();
	cat.Hunt();
	cat.Sleep();
}