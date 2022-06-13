#include "Cat.h"

int main()
{
	Cat a;
	a.Show();
	cout << endl;
	
	Cat b("Murzik");
	b.Show();
	cout << endl;

	Cat c("Murzik", 4);
	c.Show();
	cout << endl;

	Cat d("Kotik", 3, "black");
	d.Show();
	cout << endl;

	Cat e("Barsik", 2, "red", 1.5);
	e.Show();
	cout << endl;

	Cat f("Kotik", 6, "grey", 2, 60);
	f.Show();
	cout << endl;

	Cat g("Murzik", 3, "white", 3.5, 40, true);
	g.Show();
	cout << endl;


}