# C-Modules
Modules of C++ projects 42 School


## Resources
For an initial idea of a OOP is (read fast): https://www.techtarget.com/searchapparchitecture/definition/object-oriented-programming-OOP 

Nice Beginner Video: https://www.youtube.com/watch?v=-TkoO8Z07hI

We are allowed to use C++98 Standards, here the list of Libraries: https://www.geeksforgeeks.org/cpp-98-standard/

I found this c++ tutorial very well explained for difficult topics: https://www.learncpp.com/cpp-tutorial/introduction-to-object-oriented-programming/

C00:
test: ex00:
1. check if char are already big;
2. check Numbers
test: ex01: 
1. check new 9th contact rewritten is the first;
2. error handling: numbers, "CTRL + C"

C01:
test ex00:
1. check numbers

Why the difference between Pointer and References?

- Safety:  References provide a safer alternative to pointers because they cannot be null and must be initialized, reducing the risk of null pointer dereferencing.
- Simplicity:  References are easier to use and understand in many cases, especially for function arguments and return values.
- Flexibility:  Pointers offer more flexibility, such as the ability to point to different objects and to be used in complex data structures.

## WHY POINTERS TO MEMBER FUCNTION ARE ALLOWED INSIDE MAIN:

Pointers to member functions are allowed inside main (or any other function) because they’re not tied to any instance data of the class. When you define a pointer to a member function, you're only referencing the location of the function in memory, without requiring an instance of the class to do so.

Here’s a quick breakdown of why a pointer to a member function is allowed inside main, while defining a static member variable is not:
1. Pointers to Member Functions are Type Definitions, Not Memory Allocations

    When you define a pointer to a member function, such as void (Harl::*funcPtr)(void);, you're merely specifying the type and location of a function within Harl's class structure. You’re not allocating any storage or memory, nor are you associating it with an instance.
    This is purely a type-safe way to reference the function's address within the Harl class structure.

2. Static Data Members Require Memory Allocation

    A static data member like std::string Harl::name actually requires memory allocation, as it will store data shared across all instances of Harl.
    Since the compiler needs to know where to place this data in memory, you must define it outside of any function to avoid scope and linkage issues.
    Placing the definition outside the class (typically in the .cpp file) ensures it has external linkage and a clear memory location.

Example: Pointer to Member Function Inside main

Here's how you can safely define and use a pointer to a member function of Harl in main:

cpp

#include "Harl.h"

int main() {
    Harl person;

    // Define a pointer to member function
    void (Harl::*funcPtr)() = &Harl::_debug;

    // Call the member function through the pointer on an instance of Harl
    (person.*funcPtr)();

    return 0;
}

In this example:

    void (Harl::*funcPtr)() is simply a declaration of a pointer to a member function.
    funcPtr is assigned the address of Harl::_debug, so it "knows" how to reach _debug within any Harl instance.
    When calling the function, (person.*funcPtr)(), the pointer is used with an instance of Harl (person) to execute _debug() in the context of that specific instance.

This distinction between type reference (for member function pointers) and memory allocation (for static data members) is why the former is allowed in main while the latter is not.

## Polymorphism

there is a base class (example: Animal class)
i can now create derived classes to the base class (example: class Dog: public Animal )
now the derived classes can use fucntions of the base class, but the functions have to be "virtual"
