# Project Shell01

In this project we will continue diving into shell related commands. There were 8 exercises, from 01 to 08.
I did 01 to 05. ex00 was just a reminder to sign up to the exam.

#### Exercise 01: print_groups
Write a command line that will display the list of groups for which the login,
contained in the environment variable `FT_USER` , is a member. Separated by
commas without spaces. Name of file to deliver `print_groups.sh`.<br>
[ex01/print_groups.sh](ex01/print_groups.sh)

#### Exercise 02: find_sh
Write a command line that searches for all file names that end with ".sh" (without
quotation marks) in the current directory and all its sub-directories. It should
display only the file names without the `.sh`. Name of file to deliver `find_sh.sh`.<br>
Example of output: 
```s
$>./find_sh.sh | cat -e
find_sh$
file1$
file2$
file3$
$>
```
[ex02/find_sh.sh](ex02/find_sh.sh)

#### Exercise 03: count_files
Write a command line that counts and displays the number of regular files and
directories in the current directory and all its sub-directories. It should include ".",
the starting directory. Name of file to deliver `count_files.sh`.<br>
[ex03/count_files.sh](ex03/count_files.sh)

#### Exercise 04: MAC
Write a command line that displays your machine’s MAC addresses. Each address
must be followed by a line break. Name of file to deliver `MAC.sh`. <br>
[ex04/MAC.sh](ex04/MAC.sh)

#### Exercise 05: Can you create it ?
Create a file containing only "42", and NOTHING else. Name of file to deliver `"\?$*'MaRViN'*$?\"`.
```s
$>ls -lRa *MaRV* | cat -e
-rw---xr-- 1 75355 32015 2 Oct 2 12:21 "\?$*'MaRViN'*$?\"$
$>
```
[ex05/"\?$*'MaRViN'*$?\"](ex05/%5C%3F%24%2A%27MaRViN%27%2A%24%3F%5C)

### Final Grade

![image](https://github.com/user-attachments/assets/9ee92deb-6098-4f37-a0f6-7b9ac5de6875)

![image](https://github.com/user-attachments/assets/c3b37956-9660-4543-af12-100b1cd16ae0)
