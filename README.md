 # <center>**Holbertonschool_Printf**</center>
[![holberton School](https://scontent-cdg4-2.xx.fbcdn.net/v/t39.30808-6/429641439_792522079563968_5846022648137048441_n.png?_nc_cat=101&ccb=1-7&_nc_sid=cc71e4&_nc_ohc=gPri-gCHPEgQ7kNvgFfNYaA&_nc_oc=AdlGUARgCWe79_vihY-EZXOK3xisaeAMje9m008lWwWlAeOh6BH9YOzh4Yif5RVshFc&_nc_zt=23&_nc_ht=scontent-cdg4-2.xx&_nc_gid=QQjssMYool4v0a4VESD7tA&oh=00_AYGUDi_B1S-IjyP9OL6eG9K4IkBOywsavhCboLvVgPcQ7A&oe=67E84BB3)](https://www.holbertonschool.fr/)

## <ins>Description [📚](https://en.wikipedia.org/wiki/Printf):
The **`_printf`** command converts, formats, and writes its Argument parameters to standard output. 
In the standard library provides many other similar functions that form a family of printf-like functions. These functions accept a format string parameter and a variable number of value parameters that the function serializes per the format string and writes to an output stream or a string buffer.
A format specifier starts with a % character and has one or more following characters that specify how to serialize a value.

| Specifier | Fonctionnalité | Exemples |
| :---------: | :------------- | :---------|
|%   |A literal percent character. No argument is required| %.. |
|c  |The argument is treated as an integer and presented as the character with that ASCII| %c = H a ? + |
|s  |The argument is treated and presented as a string| %s = "Hello World" |
|d , i|The argument is treated as an integer and presented as a (signed) decimal number| %d = '43951789' / %i = '43951789'|
|b  |The argument is treated as an integer and presented as a binary number| %b = '10100111101010011010101101'|

## <ins>Compilation [💾](https://raw.githubusercontent.com/N4yth/holbertonschool-printf/refs/heads/Baptiste/0img/Gcc.png):
For compilation use : **`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format c`**
- As a consequence, be careful not to push any c file containing a main function in the root directory of your project.
- Our main files will include your main header file (main.h): #include main.h
- You might want to look at the gcc flag -Wno-format when testing with your **`_printf`**

## <ins>Requirements [💻](https://raw.githubusercontent.com/N4yth/holbertonschool-printf/refs/heads/Baptiste/0img/Requierements.jpeg):
- All your files will be compiled on Ubuntu 20.04 LTS using **`gcc`**.
- A README.md file, at the root of the folder of the project is mandatory.
- Your code should use the **`Betty style`**.
- The prototypes of all your functions should be included in your header file called **`main.h`**.
- You are not allowed to use global variables.
- No more than 5 functions per file
- All your header files should be include guarded.
- There should be one project repository per group.

## <ins>Exemples 📖:
```
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count_length += get_format(format[i], args);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		{
			_putchar(format[i]);
			count_length++;
		}
		i++;
	}
	va_end(args);
	return (count_length);
```
```
	type_t type[] = {
	{'s', print_string},
	{'c', print_char},
	{'i', print_int},
	{'d', print_int},
	{'\0', NULL}
	};
	int i = 0;

	while (type[i].type != '\0')
	{
		if (type[i].type == c)
		{
			return (type[i].f(args));
		}
		i++;
	}
```

## <ins>Man page [📜](https://raw.githubusercontent.com/N4yth/holbertonschool-printf/refs/heads/main/0img/man_3_printf.jpeg):
For read man pag `_printf` is <ins>[Here](https://github.com/N4yth/holbertonschool-printf/blob/main/man_3_printf)

- For read and exectue man_3_printf use : **`man ./man_3_printf`** in Terminal.

## <ins>Testing 📝:
(comment? + exemples)

## <ins>Flowchart ��:
image:

