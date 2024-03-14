#include <iostream>
using namespace std;

class Customer
{
    private:
    string name, unique_id;
    public:
    Customer(string name, string unique_id);
    Customer();
    string get_name();
    string get_unique_id();
    void set_name(string input_name);
    void set_unique_id(string input_unique_id);
};

Customer::Customer(string name, string unique_id)
{
    set_name(name);
    set_unique_id(unique_id);
}

Customer::Customer()
{
    string name, unique_id;
}

string Customer::get_name()
{
    return name;
}

string Customer::get_unique_id()
{
    return unique_id;
}

void Customer::set_name(string input_name)
{
    name = input_name;
}

void Customer::set_unique_id(string input_unique_id)
{
    unique_id = input_unique_id;
}

