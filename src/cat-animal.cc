#include <iostream>

/*
Comparison:
- Non-virtual method ⇒ static binding
- Virtual method ⇒ dynamic binding.
 */

class Animal{
public:
  virtual void eat() { std::cout << "I'm eating generic food." << std::endl; }
};

class Cat: public Animal{
public:
  void eat() { std::cout << "I'm eating a rat." << std::endl; }
};

void func(Animal *xyz) { xyz->eat(); }

int main(){

  Animal *animal = new Animal;
  Cat *cat = new Cat;
  
  animal->eat(); // Outputs: "I'm eating generic food."
  cat->eat();    // Outputs: "I'm eating a rat."

  std::cout << " --------------------------------------------- " << std::endl;
  
  func(animal); // Outputs: "I'm eating generic food."
  func(cat);    // Outputs: "I'm eating generic food."
  
  return 0;
}
