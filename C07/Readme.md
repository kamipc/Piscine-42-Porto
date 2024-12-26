# Project C07

In this project we learn to use malloc to allocate memory. There were 6 exercises, from 00 to 05. I did from 00 to 03.

#### Exercise 00 : ft_strdup
Files to turn in : `ft_strdup.c`. Allowed functions : `malloc`. <br>
Reproduce the behavior of the function strdup (`man strdup`).<br>
Function prototype:
```c
char *ft_strdup(char *src);
```
[ex00/ft_strdup.c](ex00/ft_strdup.c)

#### Exercise 01 : ft_range
Files to turn in : `ft_range.c`. Allowed functions : `malloc`. <br>
Create a function`ft_range` which returns an array of ints. This int array should
contain all values between `min` and `max`. Min included, max excluded.<br>
If min value is greater or equal to max’s value, a null pointer should be returned. <br>
Function prototype:
```c
int *ft_range(int min, int max);
```
[ex01/ft_range.c](ex01/ft_range.c)

#### Exercise 02 : ft_ultimate_range
Files to turn in : `ft_ultimate_range.c`. Allowed functions : `malloc`. <br>
Create a function `ft_ultimate_range` which allocates and assigns an array of ints.
This int array should contain all values between `min` and `max`. Min included, max excluded.<br>
The size of range should be returned (or -1 on error). If the value of min is greater or equal to max’s value, 
range will point on `NULL` and it should return `0`.
Function prototype:
```c
int ft_ultimate_range(int **range, int min, int max);
```
[ex02/ft_ultimate_range.c](ex02/ft_ultimate_range.c)

#### Exercice 03 : ft_strjoin
Files to turn in : `ft_strjoin.c`. Allowed functions : `malloc`. <br>
Write a function that will concatenate all the strings pointed by strs separated by sep. <br>
Size is the number of strings in strs, if size is 0, you must return an empty string that you can free().<br>
Function prototype:
```c
char *ft_strjoin(int size, char **strs, char *sep);
```
[ex03/ft_strjoin.c](ex03/ft_strjoin.c)

### Final Grade

![image](https://github.com/user-attachments/assets/0f10790c-49bd-4c4c-958d-c46bf87b43b0)

![image](https://github.com/user-attachments/assets/f5c461b3-31ab-4be1-be8d-39d2221a8179)
