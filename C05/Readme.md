# Project C05

This project is about creating functions for solving mathematical problems. There were 9 exercises, from 00 to 08.
I did from 00 to 06.

#### Exercise 00 : ft_iterative_factorial
Files to turn in : `ft_iterative_factorial.c`. Allowed functions : `None`. <br>
Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.<br> 
If the argument is not valid the function should return `0`.Overflows must not be handled, 
the function return will be undefined. <br>
Function prototype:
```c
int ft_iterative_factorial(int nb);
```
[ex00/ft_iterative_factorial.c](ex00/ft_iterative_factorial.c)

#### Exercise 01 : ft_recursive_factorial
Files to turn in : `ft_recursive_factorial.c`. Allowed functions : `None`. <br>
Create a recursive function that returns the factorial of the number given as a
parameter.<br>
If the argument is not valid the function should return `0`. Overflows must not be handled, 
the function return will be undefined. <br>
Function prototype:
```c
int ft_recursive_factorial(int nb);
```
[ex01/ft_recursive_factorial.c](ex01/ft_recursive_factorial.c)

#### Exercise 02 : ft_iterative_power
Files to turn in : `ft_iterative_power.c`. Allowed functions : `None`. <br>
Create an iterated function that returns the value of a power applied to a number.<br>
A power lower than 0 returns 0. Overflows must not be handled. We’ve decided that 0 power 0 will returns 1. <br>
Function prototype:
```c
int ft_iterative_power(int nb, int power);
```
[ex02/ft_iterative_power.c](ex02/ft_iterative_power.c)

#### Exercise 03 : ft_recursive_power
Files to turn in : `ft_recursive_power.c`. Allowed functions : `None`. <br>
Create a recursive function that returns the value of a power applied to a number.<br>
A power lower than 0 returns 0. Overflows must not be handled, the function return will be undefined.
We’ve decided that 0 power 0 will returns 1. <br>
Function prototype:
```c
int ft_recursive_power(int nb, int power);
```
[ex03/ft_recursive_power.c](ex03/ft_recursive_power.c)

#### Exercise 04 : ft_fibonacci
Files to turn in : `ft_fibonacci.c`. Allowed functions : `None`. <br>
Create a function ft_fibonacci that returns the n-th element of the Fibonacci
sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
sequence starts like this: `0, 1, 1, 2`. <br>
Overflows must not be handled, the function return will be undefined.<br>
Obviously, ft_fibonacci has to be recursive.If the index is less than 0, the function should return -1. <br>
Function prototype:
```c
int ft_fibonacci(int index);
```
[ex04/ft_fibonacci.c](ex04/ft_fibonacci.c)

#### Exercise 05 : ft_sqrt
Files to turn in : `ft_sqrt.c`. Allowed functions : `None`. <br>
Create a function that returns the square root of a number (if it exists), or 0 if the
square root is an irrational number.<br>
Function prototype:
```c
int ft_sqrt(int nb)
```
[ex05/ft_sqrt.c](ex05/ft_sqrt.c)
