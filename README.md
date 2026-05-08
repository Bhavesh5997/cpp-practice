# C++ Practice Repository

A structured C++ practice repository organized using a Linux-style project layout.

This repository is maintained for:

* revising C++ fundamentals
* practicing problem-solving
* learning modular project organization
* understanding build systems and Makefiles
* exploring modern C++ concepts
* improving clean coding habits

---

# Repository Structure

```text
cpp-practice/
└── exercises/
    ├── basics/
    │   ├── hello-world/
    │   ├── variables/
    │   ├── loops/
    │   │   ├── for/
    │   │   ├── while/
    │   │   └── do-while/
    │   ├── functions/
    │   ├── arrays/
    │   ├── pointers/
    │   ├── strings/
    │   ├── namespaces/
    │   ├── file-handling/
    │   ├── structures/
    │   ├── enums/
    │   ├── macros/
    │   ├── decision-making/
    │   └── storage-classes/
    └── Makefile
````

Each exercise follows a modular layout:

```text
exercise/
├── src/        # Source files
├── include/    # Header files
├── build/      # Makefiles
├── bin/        # Generated executables
└── docs/       # Optional notes/output files
```

---

# Topics Covered

## C++ Fundamentals

* Hello World
* Variables and Data Types
* Constants
* Type Casting
* Fixed Width Integer Types
* Boolean Variables
* Auto Keyword

## Decision Making

* if
* if-else
* nested if
* switch-case
* ternary operator

## Loops

* for loop
* while loop
* do-while loop
* nested loops
* infinite loops
* break and continue
* menu-driven programs

## Functions

* function declaration and definition
* separate compilation
* header files
* pass by value
* pass by reference
* function overloading
* default arguments
* inline functions
* modular programming

## Arrays

* one-dimensional arrays
* two-dimensional arrays
* array traversal
* linear search
* arrays with functions
* array shifting operations
* std::array

## Pointers

* basic pointers
* null pointers
* void pointers
* pointer arithmetic
* pointers and arrays
* pointers with functions
* function pointers
* dynamic memory allocation
* new and delete operators

## Strings

* C-style strings
* std::string
* string concatenation
* string traversal
* string input/output
* string operations

## Namespaces

* custom namespaces
* namespace access operator
* avoiding naming conflicts
* nested namespaces

## File Handling

* file creation
* file writing
* file reading
* append operations

## Structures and Enums

* structures
* nested structures
* arrays inside structures
* enums
* scoped enums (`enum class`)

## Macros and Storage Classes

* macros
* predefined macros
* debug macros
* static storage class
* extern storage class

---

# Modern C++ Features Practiced

* Function overloading
* References
* Inline functions
* Default arguments
* Namespaces
* STL containers
* std::string
* std::array
* Dynamic memory allocation using `new` and `delete`
* Type-safe abstractions
* Scoped enums (`enum class`)

---

# Build Instructions

Go inside any exercise build directory:

```bash
cd build
make
../bin/exe
```

Example:

```bash
cd exercises/basics/variables/build
make
../bin/exe
```

---

# Compiler Information

* Compiler: `g++`
* Standard: `C++20`

---

# Build Flags

```text
-Wall
-Wextra
-Werror
-std=c++20
```

---

# Coding Style

This repository follows:

* modular project organization
* Linux-style directory structure
* separate source/header design
* readable naming conventions
* warning-free compilation

---

# Purpose

This repository is maintained to:

* strengthen programming fundamentals
* improve problem-solving skills
* revise modern C++ concepts
* practice modular software organization
* prepare for technical interviews
* understand both low-level and high-level C++ concepts

---

# Planned Topics

* Classes and Objects
* Constructors and Destructors
* Inheritance
* Polymorphism
* Operator Overloading
* Templates
* STL Containers
* Smart Pointers
* Exception Handling
* Multithreading
* Lambda Functions
* Move Semantics
* RAII
* Design Patterns

---

# Status

Work in progress — new exercises and concepts are added gradually.

````
