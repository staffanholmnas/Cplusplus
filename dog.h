#include <iostream>
#include <string>

using namespace std;

namespace dog
{
    // Example of a class in C++.
    class Dog
    {
    public:
        // Instance variables
        string name;
        string breed;
        int age;

        // Constructor calls.
        Dog();
        Dog(string new_name, string new_breed, int age);

        // Calling class methods.
        void Bark();
        void GiveName(string new_name);
        void GiveAge(int new_age);
        void PrintInformation();
    };

    // Constructors:
    Dog::Dog()
    {
        name = "Nameless";
        breed = "mutt";
        age = 0;
    }

    Dog::Dog(string new_name, string new_breed, int new_age)
    {
        name = new_name;
        breed = new_breed;
        age = new_age;
    }

    // Class methods:
    void Dog::Bark()
    {
        cout << "Voff voff!!!" << endl;
    }

    void Dog::GiveName(string new_name)
    {
        name = new_name;
    }

    void Dog::PrintInformation()
    {
        cout << name << ": " << age << " year old " << breed << endl;
    }

    void Dog::GiveAge(int new_age)
    {
        age = new_age;
    }
} // namespace dog