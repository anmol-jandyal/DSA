
#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;

#define f(x) (pow(x, 3) - 2 * x - 5) //based on the function we change it

void compute(double x1, double x2, double y1, double y2, int decimal) //we take y1 +ve and y2 -ve
{
    double x = 0, y = 0;
    double check; //is taken for storing old value of x so that we can use it with present value of x and see whether they become similar or not
    int i = 0;
    cout << "\n\n x1 = " << x1 << "   x2 = " << x2 << "   f(" << x1 << ")=" << y1 << "   f(" << x2 << ")=" << y2 << "\n\n";

    double decimal_float = 1.0 / pow(10, decimal); //if we need 3 decimal point i.e there is accuracy till 0.001

    //doing iteration till we get accuracy upto given decimal places
    do
    {
        check = x;
        i++;
        cout << "iteration no. :" << i;

        x = (x1 + x2) / 2; //it is formula of bisection method
        y = f(x);

        //checking whether y is +ve or -ve
        if (y > 0)
        {
            y1 = y;
            x1 = x;
        }
        else
        {
            y2 = y;
            x2 = x;
        }

        cout << "\nx1 = " << x1 << "   x2 = " << x2 << "   f(" << x1 << ")=" << y1 << "   f(" << x2 << ")=" << y2 << "\n\n";
    } while (fabs(check - x) > decimal_float); //we run loop till check and x donot become equal

    cout << std::fixed; //this is used to display no. of digit after point same as given in setprecision()
    cout << std::setprecision(decimal);
    cout << "\n\nby the method of bisection root is: " << x;
}

int main()
{
    double x1 = 0, x2 = 1, y1 = f(x1), y2 = f(x2);

    //we find that x1 where f(x1) is +ve
    //x2 where f(x2)
    int decimal = 0;

    cout << "YOU HAVE TO ENTER A AND B TILL WE GET F(A)AND F(b) opp. sign";

AGAIN:
    cout << "\nENTER a";
    cin >> x1;
    cout << "\nenter b";
    cin >> x2;
    y1 = f(x1);
    y2 = f(x2);

    if (y1 * y2 > 0) //y1 and y2 of same sign   as multiplying same sign values is +ve
    {

        cout << "\n for a=" << x1 << " f(a) = " << y1;
        cout << "\n for b=" << x2 << " f(b) = " << y2;
        cout << "\n\nagain enter a and b as f(a) and f(b) are not of opp signs";
        goto AGAIN;
    }
    else //y1 and y2 are of opposite sign
    {
        cout << "\n for a=" << x1 << " f(a) = " << y1;
        cout << "\n for b=" << x2 << " f(b) = " << y2;
    }

    //here we get y1 and y2 of opposite signs........

    cout << "\n\nNOW ENTER UPTO HOW MANY DECIMAL POINT YOU WANT ACCURACY:";
    cin >> decimal;

    //cheching which value is +ve and which is -ve
    switch ((y1 > 0)) //value is either 1 or 0           also if it is true then obviously y1 +ve and y2 -ve
    {
    case 1: //here expression is evaluated to 1 if y1 +ve and y2 -ve
        compute(x1, x2, y1, y2, decimal);
        break;

    case 0: //here expression is evaluated to 0 if y2 +ve and y1 -ve
        compute(x2, x1, y2, y1, decimal);
        break;
    }

    return 0;
}