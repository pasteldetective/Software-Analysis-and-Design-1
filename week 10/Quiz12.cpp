#include <iostream>
using namespace std;

class Money
{
    public:
    int dollars, cents;
};

Money add_money(Money x, Money y)
{
    
    Money z;
    z.dollars = x.dollars + y.dollars;
    z.cents = x.cents + y.cents;
    if (z.cents >= 100)
    {
        z.dollars += z.cents/100;
        z.cents = z.cents % 100;
    }
    return z;
}

int main()
{

}