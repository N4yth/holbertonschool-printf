 # <center>**Holbertonschool_Printf**
[![holberton School](https://scontent-cdg4-2.xx.fbcdn.net/v/t39.30808-6/429641439_792522079563968_5846022648137048441_n.png?_nc_cat=101&ccb=1-7&_nc_sid=cc71e4&_nc_ohc=gPri-gCHPEgQ7kNvgFfNYaA&_nc_oc=AdlGUARgCWe79_vihY-EZXOK3xisaeAMje9m008lWwWlAeOh6BH9YOzh4Yif5RVshFc&_nc_zt=23&_nc_ht=scontent-cdg4-2.xx&_nc_gid=QQjssMYool4v0a4VESD7tA&oh=00_AYGUDi_B1S-IjyP9OL6eG9K4IkBOywsavhCboLvVgPcQ7A&oe=67E84BB3)](https://www.holbertonschool.fr/)

## <ins>Overview

- [Project _printf](#project-_printf)
  - [Description](#description)
  - [Features](#features)
  - [Technology](#technology)
  - [Structure_project](#structure_project)
- [Compilation](#compilation-)
- [Requirements](#requirements-)
- [Exemples](#exemples-)
- [Man_page](#man-page-)
- [Testing](#testing-)
- [Flowchart](#flowchart-)
- [Authors](#authors-)

## Project _printf<[📚](https://en.wikipedia.org/wiki/Printf)>:
### Description:
- The **`_printf`** command converts, formats, and writes its Argument parameters to standard output. 
In the standard library provides many other similar functions that form a family of printf-like functions. These functions accept a format string parameter and a variable number of value parameters that the function serializes per the format string and writes to an output stream or a string buffer.
A format specifier starts with a % character and has one or more following characters that specify how to serialize a value.

| Specifier | Fonctionnality | Exemples |
| :---------: | :------------- | :------------------|
|%    |A literal percent character. No argument is required                                %..                              |
|c    |The argument is treated as an integer and presented as  the character with that ASCII| %c = H a ? +                     |
|s    |The argument is treated and presented as a string                                   | %s = "Hello World"               |
|d , i|The argument is treated as an integer and presented as a (signed) decimal number    | %d = '43951789' / %i = '43951789'|
|b    |The argument is treated as an integer and presented as a binary number              | %b = '10100111101010011010101101'|

>### Features:
>
>Our custom `_printf` function supports the following features:
>
>- Displaying integers (int).
>- Displaying characters (char).
>- Displaying strings (string).
>- Displaying binary (unsigned int).
>- Handling variadic arguments using va_list and va_arg.


>### Technology:
>
>![](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&>logoColor=white) 
>![](https://img.shields.io/badge/VIM-%2311AB00.svg?&style=for-the-badge&logo=vim&logoColor=white)
>![](https://img.shields.io/badge/Slack-4A154B?style=for-the-badge&logo=slack&logoColor=white)
>![](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
>![](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)

### Structure_project:
|                             Files Name                                                            |                     Fonctionnality                 |
| :---------                                                                                        |            :-------------                          |
|[`[main.h]`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/main.h)                |The header file containing function prototypes and macros|
|[`_printf.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/_printf.c)            |The main function that replicates printf behavior|
|[`_putchar.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/_putchar.c)          |Function to print a single character to standard output|
|[`get_format.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/get_format.c)      |Function to determine the correct format specifier and call the corresponding print function
|[`print_char.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/print_char.c)      |Function to handle the printing of characters|
|[`print_int.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/print_int.c)        |Function to handle the printing of integers|
|[`print_string.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/print_string.c)  |Function to handle the printing of strings|
|[`print_binary.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/print_binary.c)  |Function to convert and print integers in binary format|
|[`power.c`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/power.c)                |Function to calculate the power of a number|
|[`man_3_printf`](https://github.com/N4yth/holbertonschool-printf/blob/Baptiste/man_3_printf)      |Manual page explaining the usage of `_printf`|

## <ins>Compilation <[💾](https://raw.githubusercontent.com/N4yth/holbertonschool-printf/refs/heads/Baptiste/0img/Gcc.png)>:
For compilation use : **`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format c`**
- As a consequence, be careful not to push any c file containing a main function in the root directory of your project.
- Our main files will include your main header file (main.h): #include main.h
- You might want to look at the gcc flag -Wno-format when testing with your **`_printf`**

## <ins>Requirements <[💻](https://raw.githubusercontent.com/N4yth/holbertonschool-printf/refs/heads/Baptiste/0img/Requierements.jpeg)>:
- All your files will be compiled on Ubuntu 20.04 LTS using **`gcc`**.
- A README.md file, at the root of the folder of the project is mandatory.
- Your code should use the **`Betty style`**.
- The prototypes of all your functions should be included in your header file called **`main.h`**.
- You are not allowed to use global variables.
- No more than 5 functions per file
- All your header files should be include guarded.
- There should be one project repository per group.

## <ins>Exemples 📖:

For the examples we will use a `main.c` file with the functionality present in `_printf`.
### Main:
```
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        _printf("test\n");
        _printf("test %c\n", 'c');
        _printf("%s string\n", "test");
        _printf("test %d\n", 1);
        _printf("test %i\n", 2);
        _printf("%b\n", 1423);

        return(0);
}
```
### Outpout:
```
:~/holbertonschool-printf$./a.out
test
test c
test string
test 1
test 2
10110001111
```

## <ins>Man page <[📜](https://raw.githubusercontent.com/N4yth/holbertonschool-printf/refs/heads/main/0img/man_3_printf.jpeg)>:
For read man pag `_printf` is <ins>[Here](https://github.com/N4yth/holbertonschool-printf/blob/main/man_3_printf)

- For read and exectue man_3_printf use : **`man ./man_3_printf`** in Terminal.
- Our main files will include your main header file (main.h): #include main.h
- You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. 

## <ins>Testing 📝:
To test for memory leaks, you use "Valgrind" followed by the executable. The executable command for the example is: **`valgrind ./a.aout`**
````
:~/holbertonschool-printf$ valgrind ./a.out
==5895== Memcheck, a memory error detector
==5895== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==5895== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==5895== Command: ./a.out
==5895==
==5895== error calling PR_SET_PTRACER, vgdb might block
test
test c
test string
test 1
test 2
10110001111
==5895==
==5895== HEAP SUMMARY:
==5895==     in use at exit: 0 bytes in 0 blocks
==5895==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==5895==
==5895== All heap blocks were freed -- no leaks are possible
==5895==
==5895== For lists of detected and suppressed errors, rerun with: -s
==5895== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
````

## <ins>Flowchart 📈:

The flowchart for our command **`_printf`** :

![Flowchart](https://github.com/N4yth/holbertonschool-printf/blob/main/0img/flowchart_Printf_Nathan_Baptiste.png?raw=true)

## <ins>Authors :

[Nathan Dupuis](https://github.com/N4yth)    /   [Baptiste Lonqueu](https://github.com/lnqbat)
