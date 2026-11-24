#include <iostream>
using namespace std;
class Calculator
{
	public:
	int add;
	int addition(int a,int b)
	{
		return add=a+b;
	}

	int addition(int a,int b,int c)
	{
		return add=a+b+c;
	}
};

int main()
{
	Calculator c;
	cout<<"The sum of 2 numbers is ="<<c.addition(5,25)<<endl;
	cout<<"The sum of 3 numbers is ="<<c.addition(5,25,125)<<endl;
	return 0;
}
