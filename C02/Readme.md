# Project C02

There were 13 exercises, from 00 to 12. I did from 00 to 11.

#### Exercise 00 : ft_strcpy
Files to turn in : `ft_strcpy.c`. Allowed functions : `None`. <br>
Reproduce the behavior of the function strcpy (man strcpy).<br>
Function prototype:
```c
char *ft_strcpy(char *dest, char *src);
```
[ex00/ft_strcpy.c](ex00/ft_strcpy.c)

#### Exercise 01 : ft_strncpy
Files to turn in : `ft_strncpy.c`. Allowed functions : `None`. <br>
Reproduce the behavior of the function strncpy (man strncpy). <br>
Function prototype:
```c
char *ft_strncpy(char *dest, char *src, unsigned int n);
```
[ex01/ft_strncpy.c](ex01/ft_strncpy.c)

#### Exercise 02 : ft_str_is_alpha
Files to turn in : `ft_str_is_alpha.c`. Allowed functions : `None`. <br>
Create a function that returns `1` if the string given as a parameter contains only
alphabetical characters, and `0` if it contains any other character.<br>
It should return `1` if str is empty.<br>
Function prototype:
```c
int ft_str_is_alpha(char *str);
```
[ex02/ft_str_is_alpha.c](ex02/ft_str_is_alpha.c)

#### Exercise 03 : ft_str_is_numeric
Files to turn in : `ft_str_is_numeric.c`. Allowed functions : `None`. <br>
Create a function that returns `1` if the string given as a parameter contains only
digits, and `0` if it contains any other character.<br>
It should return `1` if str is empty. <br>
Function prototype:
```c
int ft_str_is_numeric(char *str);
```
[ex03/ft_str_is_numeric.c](ex03/ft_str_is_numeric.c)

#### Exercise 04 : ft_str_is_lowercase
Files to turn in : `ft_str_is_lowercase.c`. Allowed functions : `None`. <br>
Create a function that returns `1` if the string given as a parameter contains only
lowercase alphabetical characters, and `0` if it contains any other character.<br>
It should return `1` if str is empty.<br>
Function prototype:
```c
int ft_str_is_lowercase(char *str);
```
[ex04/ft_str_is_lowercase.c](ex04/ft_str_is_lowercase.c)

#### Exercise 05 : ft_str_is_uppercase
Files to turn in : `ft_str_is_uppercase.c`. Allowed functions : `None`. <br>
Create a function that returns `1` if the string given as a parameter contains only
uppercase alphabetical characters, and `0` if it contains any other character.<br>
It should return 1 if str is empty.<br>
Function prototype:
```c
int ft_str_is_uppercase(char *str);
```
[ex05/ft_str_is_uppercase.c](ex05/ft_str_is_uppercase.c)

#### Exercise 06 : ft_str_is_printable
Files to turn in : `ft_str_is_printable.c`. Allowed functions : `None`. <br>
Create a function that returns `1` if the string given as a parameter contains only
printable characters, and `0` if it contains any other character.<br>
It should return `1` if str is empty.<br>
Function prototype:
```c
int ft_str_is_printable(char *str);
```
[ex06/ft_str_is_printable.c](ex06/ft_str_is_printable.c)

#### Exercise 07 : ft_strupcase
Files to turn in : `ft_strupcase.c`. Allowed functions : `None`. <br>
Create a function that transforms every letter to `uppercase`. It should return str.<br>
Function prototype:
```c
char *ft_strupcase(char *str);
```
[ex07/ft_strupcase.c](ex07/ft_strupcase.c)

#### Exercise 08 : ft_strlowcase
Files to turn in : `ft_strlowcase.c`. Allowed functions : `None`. <br>
Create a function that transforms every letter to `lowercase`. It should return str.<br>
Function prototype:
```c
char *ft_strlowcase(char *str);
```
[ex08/ft_strlowcase.c](ex08/ft_strlowcase.c)

#### Exercise 09 : ft_strcapitalize
Files to turn in : `ft_strcapitalize.c`. Allowed functions : `None`. <br>
Create a function that capitalizes the first letter of each word and transforms all
other letters to lowercase. A word is a string of alphanumeric characters. It should return str.<br>
Function prototype:
```c
char *ft_strcapitalize(char *str);
```
For example:
```
salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
```
Becomes:
```
Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
```
[ex09/ft_strcapitalize.c](ex09/ft_strcapitalize.c)

#### Exercise 10 : ft_strlcpy
Files to turn in : `ft_strlcpy.c`. Allowed functions : `None`. <br>
Reproduce the behavior of the function strlcpy (man strlcpy).<br>
Function prototype:
```c
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
```
[ex10/ft_strlcpy.c](ex10/ft_strlcpy.c)

#### Exercise 11 : ft_putstr_non_printable
Files to turn in : `ft_putstr_non_printable.c`. Allowed functions : `write`. <br>
Create a function that displays a string of characters onscreen. If this string con-
tains characters that aren’t printable, they’ll have to be displayed in the shape of
hexadecimals (lowercase), preceeded by a "backslash".<br>
Function prototype:
```c
void ft_putstr_non_printable(char *str);
```
For example:
```
Coucou\ntu vas bien ?
```
Becomes:
```
Coucou\0atu vas bien ?
```
[ex11/ft_putstr_non_printable.c](ex11/ft_putstr_non_printable.c)

### Final Grade

![image](https://github.com/user-attachments/assets/80deb8bd-bda6-45e1-a59a-b2da2ede6f03)

![image](https://github.com/user-attachments/assets/486568bc-9214-4fdd-9c63-fb2260b1c47d)
