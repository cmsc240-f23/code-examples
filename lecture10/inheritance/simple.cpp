#include <iostream>
using namespace std;

class Parent 
{
public:
    Parent()
    {
        cout << "1. Parent class under construction." << endl;
    }
};
 
class Child : public Parent   // Child inherits from the Parent  
{
public:
    Child()
    {
        cout << "2. Child class under construction." << endl;
    }
};

int main()
{
    // Create a new instance of the child class.
    Child childInstance;
}


