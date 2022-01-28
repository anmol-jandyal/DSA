#include <iostream>
using std::cin;
using std::cout;
using std::endl;

typedef struct
{
	double x;
	double y;
	double forward; //for forward differerce
} table;

class data
{

	int n;
	double const_u;
	table *arr; //arr is pointer to the table array

public:
	data(int n) // n is no. of elements
	{
		this->n = n;

		arr = new table[n]; //create a table of size n
	}

	void input();
	void display();
	void calcu_forward();
	double calculate(int);
	double fun(double givenx);
};

double data::fun(double givenx)
{
	const_u = (givenx - (arr)->x) / ((arr + 1)->x - (arr)->x); //u = (x-xo) / (x1-xo)

	return calculate(n - 1);
}

double data::calculate(int no)
{
	if (no == 0)
	{
		return (arr)->y; //yo
	}
	static double u = const_u;
	static double f = 1;
	double val = calculate(no - 1);
	double fx = val + (u * (arr + no)->forward) / f;

	u = u * (const_u - no);
	f = f * (no + 1);
	return fx;
}

void data::calcu_forward()
{
	for (int i = 1; i < n; i++)
	{
		(arr + i)->forward = (arr + i)->y - (arr + i - 1)->y; //it put first order forward difference in array pointed by arr and in forward  member
	}

	for (int i = 2; i <= n - 1; i++)
	{
		for (int j = n - 1; j >= i; j--)
		{
			(arr + j)->forward = (arr + j)->forward - (arr + j - 1)->forward;
		}
	}
}

void data::display()
{
	cout << "x			y\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << (arr + i)->x << "			" << (arr + i)->y << endl;
	}
	cout << "\n\nforward difference:";

	for (int i = 1; i < n; i++)
	{
		cout << "\n"
			 << i << " order forward difference yo = " << (arr + i)->forward;
	}
}

void data::input()
{
	for (int i = 0; i < n; i++)
	{
		cout << "x [" << i << "] :";
		cin >> (arr + i)->x; //arr is a pointer i.e address also arr+i is also an address so we can use (arr+i)->x

		cout << "y [" << i << "] :";
		cin >> (arr + i)->y;
	}
}

int main()
{
	int n;

	cout << "ENTER NO. OF TERMS:";
	cin >> n;

	//creating object of data type class

	data d(n); //n is no. of elements

	//take input for x and y
	d.input();

	//taking for which value of x we need y
	double givenx = 0;
	cout << "\nenter x for which y is needed:";
	cin >> givenx;

	d.calcu_forward();
	d.display(); //display x and corresponding values of y and also forward difference

	//output displaying
	cout << "\n\nthe value of y at x = " << givenx << " is \n"
		 << d.fun(givenx);
}