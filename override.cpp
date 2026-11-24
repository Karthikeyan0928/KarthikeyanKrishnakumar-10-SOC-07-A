#include <iostream>
using namespace std;
class Animal
{
	public:
	void eat()
	{
		cout<<"animal eats"<<endl;
	}
};

class cat:public Animal
{
	public:
	void eat()
	{
		cout<<"cat eats fish"<<endl;
	}
};

int main()
{
	Animal a;
	cat c;
	c.eat();
	a.eat();
	return 0;
}
