# CPP Modules 00-04 (42 - lvl 4)

## 1. Overview

This project introduces object-oriented programming, namely c++.

| Module | Description |
| :---: | :---: |
| CPP00 | The principles of OOP, static and const modifiers |
| CPP01 | Dynamic allocation, member function pointers and switch statement  |
| CPP02 | Operator overloading and Orthodox Canonical Form |
| CPP03 | Inheritance |
| CPP04 | Polymorphism, Abstract Classes and Interfaces |

## 2. Different Functions

### 2.1 Dynamic allocation and static allocation

Dynamic allocation in C++ refers to the process of allocating memory for variables at runtime, as opposed to static allocation, where memory is allocated at compile time. Dynamic allocation is done using operators new and delete, and it allows you to create variables whose size is not known until the program is executed.

### 2.2. Overload Operators 

Operator overloading in C++ allows you to define how an operator should behave when applied to user-defined data types or objects. This enables you to use operators with objects just like you would with built-in data types. For example, you can overload operators for your own classes to define how addition, subtraction, or other operations should be performed on objects of that class.

Example: 

```
#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Overloading the + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
};

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.5, 2.5);

    Complex result = a + b;  // Calls the overloaded + operator

    std::cout << "Result: " << result << std::endl;  // Calls the overloaded << operator

    return 0;
}

 ```

### 2.3 Orthodox Canonical Form

Orthodox cannonical form is a way to write a c++ class that have the following characteristics:

1. Default constructor
2. Copy constructor
3. Destructor
4. Copy assignment operator

### 2.4 Inheritance

Inheritance is a fundamental concept in object-oriented programming (OOP), and it allows a class to inherit properties and behaviors from another class. In C++, the language supports both single and multiple inheritance.


