#include <iostream>

using namespace std;
//Employee - Address
// Aggregation

class Address
{
    public:
        string city, country;
        Address(string _city, string _country)
        {
            city = _city;
            country = _country;
        }
};

class Employee
{
    private:
        Address* address;
    public:
        int id;
        string name;
        Employee(int _id, string _name, Address* _address)
        {
            id = _id;
            name = _name;
            address = _address;
        }
        void display()
        {
            cout << "ID : " << id << endl;
            cout << "Name : " << name << endl;
            cout << "City : " << address->city << endl;
            cout<< "Country : " << address->country << endl;
        }
};

int main()
{
    Address a1("Beni Suif", "Egypt");
    Employee e1(19,"Ali", &a1);
    e1.display();
    return 0;
}
