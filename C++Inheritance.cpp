#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
  string name;
  string place;
  int age;

  Animal(string animal_name, string animal_place, int animal_age);

  void Move(string new_place);
  void SetAge(int new_age);
  void SetName(string new_name);
};

Animal::Animal(string animal_name, string animal_place, int animal_age)
{
  name = animal_name;
  place = animal_place;
  age = animal_age;
}

void Animal::Move(string new_place)
{
  place = new_place;
}

void Animal::SetAge(int new_age)
{
  age = new_age;
}

void Animal::SetName(string new_name)
{
  name = new_name;
}

class Dog : public Animal
{
public:
  string breed;

  Dog(string dog_breed, string animal_name, string animal_place, int animal_age);

  void SetBreed(string new_breed);
  void Bark();
  void PrintData();
};

Dog::Dog(string dog_breed, string animal_name, string animal_place, int animal_age) : Animal(animal_name, animal_place, animal_age)
{
  breed = dog_breed;
}

void Dog::SetBreed(string new_breed)
{
  breed = new_breed;
}

void Dog::Bark()
{
  cout << name << " goes voff voff!!!";
}

void Dog::PrintData()
{
  cout << "My name is: " << name << endl;
  cout << "I'm from: " << place << endl;
  cout << "My age: " << age << endl;
  cout << "My breed: " << breed << endl;
  cout << endl;
}

int main()
{
  Dog Dog1("Boxer", "Pluto", "Bronx", 5);

  cout << "The dogs information in the beginning:\n\n";
  Dog1.PrintData();

  Dog1.SetBreed("Dalmatian");
  Dog1.SetAge(7);
  Dog1.SetName("Pete");
  Dog1.Move("Brooklyn");

  cout << "The dogs information now:\n";
  Dog1.PrintData();

  Dog1.Bark();
  cout << "\n\n";
}