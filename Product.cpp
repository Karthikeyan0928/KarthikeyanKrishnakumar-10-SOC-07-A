#include <iostream>
using namespace std;
class Product
{
	public:
	string P_Name;
	float Price_Per_Unit;
	float m_sales[12];

	void SetDetails(string name,float price,float sales[])
	{
		Price_Per_Unit=price;
		P_Name=name;

		for(int i=0;i<12;i++)
		{
			m_sales[i]=sales[i];
		}
	}



	int TotalQuantitySold()
	{
		int totalqty=0;
		for(int i=0;i<12;i++)
		{
			totalqty+=m_sales[i];
		}
		return totalqty;
	}


	float TotalBill()
	{
		return Price_Per_Unit*TotalQuantitySold();
	}



	void DisplayDetails()
	{
		cout<<"Name of product:"<<P_Name<<endl;
		cout<<"Price of each unit ="<<Price_Per_Unit<<endl;
		cout<<"Total quantity sold="<<TotalQuantitySold()<<endl;
		cout<<"Total bill="<<TotalBill()<<endl;
	}
};

int main()
{
	Product p;
	float sales[12]={10,7,6,8,12,18,1,6,9,4,5,11};
	for(int i=1;i<13;i++)
	{
		cout<<"Sale in month "<<i<<"="<<sales[i]<<endl;
	}
	
	p.SetDetails("Keyboard",1250,sales);
	p.TotalQuantitySold();
	p.TotalBill();
	p.DisplayDetails();
	return 0;
}
