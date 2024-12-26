# Project C04

There were 6 exercises, from 00 to 05. Did all but had a norminette error on 05.

#### Exercise 00 : ft_strlen
Files to turn in : `ft_strlen.c`. Allowed functions : `None`. <br>
Create a function that counts and returns the number of characters in a string.<br>
Function prototype:
```c
int ft_strlen(char *str);
```
```
Yes! the same one from project C01 ex06...
```
[ex00/ft_strlen.c](ex00/ft_strlen.c)

#### Exercise 01 : ft_putstr
Files to turn in : `ft_putstr.c`. Allowed functions : `write`. <br>
Create a function that displays a string of characters on the standard output.<br>
Function prototype:
```c
void ft_putstr(char *str);
```
```
Yes! The same one from project C01 ex05...
```
[ex01/ft_putstr.c](ex01/ft_putstr.c)

#### Exercise 02 : ft_putnbr
Files to turn in : `ft_putnbr.c`. Allowed functions : `write`. <br>
Create a function that displays the number entered as a parameter. The function
has to be able to display all possible values within an int type variable.<br>
Function prototype:
```c
void ft_putnbr(int nb);
```
```
Yes! The same one from project C00 ex07...
```
[ex02/ft_putnbr.c](ex02/ft_putnbr.c)

#### Exercise 03 : ft_atoi
Files to turn in : `ft_atoi.c`. Allowed functions : `None`. <br>
Write a function that converts the initial portion of the string pointed by str to its int
representation.The string can start with an arbitray amount of white space (as determined by isspace(3)).<br>
The string can be followed by an arbitrary amount of + and - signs, - sign will change
the sign of the int returned based on the number of - is odd or even.<br>
Finally the string can be followed by any numbers of the base 10. Your function should read the 
string until the string stop following the rules and return the number found until now.<br>
You should not take care of overflow or underflow. result can be undefined in that case.<br>
Function prototype:
```c
int ft_atoi(char *str);
```
Exemple:
```s
$>./a.out " ---+--+1234ab567"
-1234
```
[ex03/ft_atoi.c](ex03/ft_atoi.c)

#### Exercise 04 : ft_putnbr_base
Files to turn in : `ft_putnbr_base.c`. Allowed functions : `write`. <br>
Create a function that displays a number in a base system in the terminal.<br>
This number is given in the shape of an int, and the radix in the shape of a string
of characters. The base-system contains all useable symbols to display that number:<br>
- 0123456789 is the commonly used base system to represent decimal numbers
- 01 is a binary base system ;
- 0123456789ABCDEF an hexadecimal base system ;
- poneyvif is an octal base system.
The function must handle negative numbers. If there’s an invalid argument,
nothing should be displayed. Examples of invalid arguments: <br>
- base is empty or size of 1;
- base contains the same character twice ;
- base contains + or - ;<br>
Function prototype:
```c
void ft_putnbr_base(int nbr, char *base);
```
[ex04/ft_putnbr_base.c](ex04/ft_putnbr_base.c)

#### Exercise 05 : ft_atoi_base
Files to turn in : `ft_atoi_base.c`. Allowed functions : `None`. <br>
Write a function that converts the initial portion of the string pointed by str to int representation. <br>
str is in a specific base given as a second parameter. Excepted the base rule, 
the function should work exactly like ft_atoi. <br>
If there’s an invalid argument, the function should return 0. Examples of invalid arguments :<br>
- base is empty or size of 1;
- base contains the same character twice ;
- base contains + or - or whitespaces;<br>
Function prototype:
```c
int ft_atoi_base(char *str, char *base)
```
[ex05/ft_atoi_base.c](ex05/ft_atoi_base.c)

### Final Grade

![image](https://github.com/user-attachments/assets/3e899780-15a9-4951-9061-902d27568971)

![image](https://github.com/user-attachments/assets/818ad6ed-32c7-42b0-abbc-5f8a3cdee9da)
