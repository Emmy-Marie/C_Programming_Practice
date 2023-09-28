---

# C Programming: Functions


## Table of Contents

- [Introduction](#introduction)
- [What Are Functions?](#what-are-functions)
- [Function Declaration and Definition](#function-declaration-and-definition)
- [Function Prototypes](#function-prototypes)
- [Function Parameters](#function-parameters)
- [Return Values](#return-values)
- [Function Call](#function-call)
- [Function Classification](#function-classification)
- [Examples](#examples)
- [Conclusion](#conclusion)

## Introduction

Welcome to the world of C programming functions! Functions are a fundamental concept in C, allowing us to modularize our code, make it more organized, and promote code reusability. This README.md script serves as a guide to help understand the basics of functions in C programming.

## What Are Functions?

In C programming, a function is a self-contained block of code that performs a specific task. Functions are used to break down a program into smaller, manageable units. They make the code more readable, maintainable, and reusable.

## Function Declaration and Definition

- **Declaration**: A function declaration tells the compiler about a function's name, return type, and parameters. It provides a "signature" of the function without its implementation. For example:

  ```c
  int add(int a, int b);
  ```

- **Definition**: A function definition includes the implementation of the function. It specifies what the function does. For example:

  ```c
  int add(int a, int b) {
      return a + b;
  }
  ```

## Function Prototypes

A function prototype is a declaration of a function that appears at the beginning of a program or in a header file. It provides information to the compiler about the function's signature. Function prototypes are essential for functions defined after their first use in the code.

```c
// Function prototype
int add(int a, int b);

int main() {
    int result = add(5, 3);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

## Function Parameters

Parameters (or arguments) are values passed to a function when it is called. Functions can have zero or more parameters. Parameters allow functions to accept input data and perform operations on it.

```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3); // '5' and '3' are arguments
    return 0;
}
```

## Return Values

Functions can return values to the calling code. The return type of the function specifies the type of the value it will return. The `return` statement is used to send a value back to the caller.

```c
int add(int a, int b) {
    return a + b;
}
```

## Function Call

To use a function, you call it by its name followed by parentheses. If the function has parameters, you pass values inside the parentheses.

```c
int result = add(5, 3);
```

A function can be called either by value or by reference;

- **Function Call by Value**: This is a parameter-passing mechanism used in programming languages like C and C++. In this mechanism, when you pass an argument to a function, you are passing the value of the argument to the function, not the actual variable itself. This means that changes made to the parameter inside the function do not affect the original variable outside the function.

```c
#include <stdio.h>

void modifyValue(int x) {
    x = x * 2; // Modifying the parameter 'x'
}

int main() {
    int num = 5;

    printf("Before calling modifyValue: %d\n", num);
    modifyValue(num); // Function call by value
    printf("After calling modifyValue: %d\n", num); // 'num' remains unchanged

    return 0;
}
```

- **Function Call by Reference**: is a parameter-passing mechanism in programming where a function receives a reference or address of a variable as an argument. In other words, when you pass an argument to a function by reference, you are passing the memory address of the variable, allowing the function to directly access and modify the original variable's value. In C, function call by reference is achieved by passing pointers to variables as function arguments.

```c
#include <stdio.h>

void modifyValueByReference(int *x) {
    (*x) = (*x) * 2; // Modifying the original variable 'num' using a pointer
}

int main() {
    int num = 5;

    printf("Before calling modifyValueByReference: %d\n", num);
    modifyValueByReference(&num); // Function call by reference using a pointer
    printf("After calling modifyValueByReference: %d\n", num); // 'num' has been modified

    return 0;
}

```
## Function Classification

A function can be categorised into four(4) categories:

- **No Argument No Return Type**: A function that takes no arguments and has no return type in C or C++ is often referred to as a "void function with no parameters." These functions are defined with the void keyword as the return type and no parameters in the parameter list. They perform a specific task or action without taking any input values or returning any results. e.g. `void functionName(void)`.

- **No Argument With Return Type**: These functions are defined with a return type (other than void) and an empty parameter list to indicate that they don't require any input values, but they do return a result of the specified type. e.g. `return_type function_name(void)`.

- **With Argument No Return Type**: This type of function is often referred to as a "void function with arguments." These functions are defined with the void keyword as the return type, and they can accept one or more arguments. These functions perform specific tasks or actions based on the provided arguments but do not return any values. e.g. `void function_name(arg1, arg2, .....)`.
  
- **With Argument With Return Type**: This function takes arguments (parameters) and has a return type. This is one of the most common types of functions. These functions accept input values via parameters, perform some computation or operation based on those inputs, and then return a result of the specified return type. e.g. `int function_name(arg1, arg2, ....)`.


## Examples

Check out some common examples of functions in C programming:

- **Basic Arithmetic Functions**: Functions to perform addition, subtraction, multiplication, and division.

- **Input and Output Functions**: Functions like `printf` and `scanf` for input and output.

- **User-Defined Functions**: Creating your own functions to perform specific tasks.

## Conclusion

Functions are a vital aspect of C programming. They allow us to break down complex tasks into manageable parts, making our code more structured and efficient. Learning how to use and create functions is a significant step towards becoming a proficient C programmer.

Happy coding! 🚀
