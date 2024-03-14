/*
Author: Jackie Yee
Course: CSCI-136
Instructor: Professor Hassan
Assignment: title, e.g., Lab9D

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D
{
public:
    double x;
    double y;
    double z;
};

Coord3D* createCoord3D(double x, double y, double z) //task e dynamically allocate memory
{
    //dynamically allocate MEMORY
    //int *x = new int; //dynamically allocate;
    //Coord3D * test = new Coord3D;

    //Coord3D object so return address
    //return test;//memory address

    Coord3D * one = new Coord3D;
    
    one -> x = x;
    one -> y = y;
    one -> z = z;

    return one;
}

double length(Coord3D *p)
{

    double length = sqrt(pow(p->x,2) + pow(p->y,2) + pow(p->z,2));
    //p.x gives memory address
    //*p.x gives memory value of x
    //p>x gives the memory value of x as well
    /* double Power(p->x); //save as (*p).x
    double Power1(p->y);
    double Power2(p->z);
    double sqrt((*p).x); //double sqrt((*p).x,2)
    double sqrt1((*p).y);
    double sqrt2((*p).z);
    double length = sqrt + sqrt1 + sqrt2;
    return length;
    */
   return length;
   
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    //x' = x + vel.x * dt;
    //p>x
    //(*p).x = (*p).x (*pvel).x * dt);
    //y' = y + vel.x * dt;
    //(*p).y = (*p).y (*pvel).y * dt);
    //z' = z + vel.x * dt;
    //(*p).z = (*p).z (*pvel).z * dt);
    ppos->x = ppos->x + pvel->x * dt;
    ppos->y = ppos->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt;
    
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) //returning a pointer
{
    //get length of p1 & p2, which ever is greatest is farthest
    //return p1 or p2 depending on greatest length
    double origin1 = length(p1);
    double origin2 = length(p2);
    if (origin1 > origin2)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}

void deleteCoord3D(Coord3D *p) //task e
{
    //release the memory 
    delete p;
}

int main() 
{
    /* Lab9A
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166
    */

    /* Lab9B
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther?
    */

    /* Lab 9C
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
    */

   //Lab 9E
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);


}