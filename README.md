# Printf project
![Holberton logo](https://www.holbertonschool.com/holberton-logo.png)
> Create a printf function in C

## Description:bulb:
This project is about making a custom prototype of the function printf, emulating the original one.

* In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.

## Technologies & Tools:computer:

![Ubuntu](https://img.shields.io/badge/≡-Ubuntu-E95420?&style=flat-square&logo=Ubuntu&labelColor=282828)
![Git](https://img.shields.io/badge/≡-Git-F05032?logo=git&style=flat-square&labelColor=282828)
![GNU_Bash](https://img.shields.io/badge/≡-GNU_Bash-4EAA25?logo=GNU-Bash&style=flat-square&labelColor=282828)
![Vim](https://img.shields.io/badge/≡-Vim-019733?logo=Vim&style=flat-square&logoColor=019733&labelColor=282828)
![Vagrant](https://img.shields.io/badge/≡-Vagrant-1563FF?logo=Vagrant&style=flat-square&logoColor=1563FF&labelColor=282828)
![C](https://img.shields.io/badge/≡-C-A8B9CC?logo=C&style=flat-square&labelColor=282828)
![GNU_Emacs](https://img.shields.io/badge/≡-GNU_Emacs-7F5AB6?logo=GNU-Emacs&style=flat-square&labelColor=282828)
![GitHub](https://img.shields.io/badge/≡-GitHub-181717?logo=GitHub&style=flat-square&labelColor=282828)

printf is the C language function to do formatted printing, in the most simple case, printf takes one argument, a string of characters, for example, so it can be displayed on the screen but the real power of printf is when we are printing the contents of variables, basing on the format promted for display such variable. Every format specification starts with a percent sign "%" and ends with a letter. The letters are chosen to have some mnemonic meaning. Here is a partial list:

```C
%c print a single character
%d print a decimal (base 10) number
%e print an exponential floating-point number
%f print a floating-point number
%g print a general-format floating-point number
%i print an integer in base 10
%o print a number in octal (base 8)
%s print a string of characters
%u print an unsigned decimal (base 10) number
%x print a number in hexidecimal (base 16)
%% print a percent sign (\% also works)
```

---

## Return value:arrow_left:
Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

---

## Example:hammer_and_wrench:
### Clone repo using HTTPS
``` $ git clone https://github.com/Diego-Zen/printf.git ```

### Create main function
```C
#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_printf("Hello there!\n");
	_printf("String: %s\n", "Hello world!");
	return (0);
}
```

### Compilation
You can compile the files using this command:
``` $ gcc -Wall -pedantic -Werror Wextra *.c ```

---

## Contribution:heavy_check_mark:
Create a new branch with the name of your feature or fix and make a pull request to develop branch explaining your work.

---

## Authors
* **David Bravo** - [dbravo0](https://github.com/dbravo0)
* **Diego Monroy** (@diegozencode) - [<img src="https://img.shields.io/badge/Portfolio-20d6fe.svg?&style=plastic"/>](https://diegozencode.github.io/)
[<img src="https://img.shields.io/badge/Twitter-1DA1F2.svg?&style=plastic&logo=twitter&logoColor=white"/>](https://twitter.com/diegozencode)
[<img src="https://img.shields.io/badge/Linkedin-0A66C2.svg?&style=plastic&logo=linkedin&logoColor=white"/>](https://www.linkedin.com/in/diegozencode)
[<img src="https://img.shields.io/badge/GitHub-181717.svg?&style=plastic&logo=github&logoColor=white"/>](https://github.com/diegozencode)