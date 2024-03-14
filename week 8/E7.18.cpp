#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    public:
    double x, y;
};

struct Triangle
{
    double a, b, c;
};

double perimeter(Triangle tri)
{
    double p = tri.a + tri.b + tri.c;
    return p;
}

int main()
{
    Point a = {50, 15};
    Point b = {34, 10};
    Point c = {13,83};

    double sidea = sqrt(pow((a.x - b.x),2) + pow((a.y - b.y),2));
    double sideb = sqrt(pow((b.x - c.x),2) + pow((b.y - c.y),2));
    double sidec = sqrt(pow((c.x - a.x),2) + pow((c.y - a.y),2));
    Triangle tri = {sidea, sideb, sidec};

    cout << "Perimeter of trangle is: " << perimeter(tri) << endl;
}