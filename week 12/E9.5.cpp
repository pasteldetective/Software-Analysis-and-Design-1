/*
Implement a class Rectangle. Provide a constructor to construct a rectangle with a
given width and height, member functions get_perimeter and get_area that compute
the perimeter and area, and a member function void resize(double factor) that resizes
the rectangle by multiplying the width and height by the given factor.
*/

class Rectangle
{
    private:
    double height, width;
    public:
    Rectangle(double input_w, double input_h);
    double get_perimeter();
    double get_area();
    void resize(double factor);
};

Rectangle::Rectangle(double input_w, double input_h)
{
    height = input_w; 
    width = input_h;
}

double Rectangle::get_perimeter()
{
    return (2*height) + (2*width);
}

double Rectangle::get_area()
{
    return height*width;
}

void Rectangle::resize(double factor)
{
    width = width * factor;
    height = height * factor;
}