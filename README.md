# Inheritance and `final` Keyword in C++

This repository provides an overview and examples of **inheritance** and the **`final` keyword** in **C++**. It demonstrates how classes can inherit attributes and methods from other classes, and how the `final` keyword can be used to restrict inheritance and method overriding.

## **Contents**

- **Inheritance Basics**: Explanation of single, multiple, and multilevel inheritance.
- **Examples**: Code examples illustrating inheritance in C++.
- **`final` Keyword**: Description of the `final` keyword and its usage with classes and functions.
- **Sample Code**: Practical code showing how `final` prevents further inheritance and overriding.

## **Concepts**

### **1. Inheritance**
Inheritance allows a derived class to acquire properties and behavior from a base class, promoting code reusability. Types of inheritance in **C++** include:
- **Single Inheritance**
- **Multiple Inheritance**
- **Multilevel Inheritance**

### **2. `final` Keyword**
The `final` keyword restricts inheritance or method overriding:
- When applied to a **class**, it prevents other classes from inheriting it.
- When applied to a **function**, it prevents derived classes from overriding that function.

## **Usage**

Clone this repository and compile the code using a **C++** compiler:
```bash
git clone https://github.com/PunitTak2005/Inheritance-and-final-keyword-in-c-.git
cd Inheritance-and-final-keyword-in-c-
g++ main.cpp -o inheritance_example
./inheritance_example

# License

This project is licensed under the MIT License - see the LICENSE file for details.
