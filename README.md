# Printf project

<img src="images/holberton-logo.png" width="50" />

> Create a printf function in C

## Description

This project is about making a custom prototype of the function printf, emulating the original one.

- In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.

## Technologies & Tools 💻

| Category    | Technology/Tool                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| ----------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `Backend`   | [![C](https://img.shields.io/badge/-C_Programming_language-A8B9CC?&style=flat-square&logo=c&labelColor=282828)](https://developer.mozilla.org/en-US/docs/Web/HTML)                                                                                                                                                                                                                                                                                                                                                                                                      |
| `Editors`   | [![Vim](https://img.shields.io/badge/-Vim-019733?logo=vim&style=flat-square&logoColor=019733&labelColor=282828)](https://www.vim.org/) [![GNU Emacs](https://img.shields.io/badge/-GNU_Emacs-7F5AB6?logo=vim&style=flat-square&logoColor=7F5AB6&labelColor=282828)](https://www.gnu.org/software/emacs/)                                                                                                                                                                                                                                                                |
| `Utilities` | [![Ubuntu](https://img.shields.io/badge/-Ubuntu-E95420?logo=ubuntu&style=flat-square&labelColor=282828)](https://ubuntu.com/download) [![Git](https://img.shields.io/badge/-Git-F05032?logo=git&style=flat-square&labelColor=282828)](https://git-scm.com/) [![GNU_Bash](https://img.shields.io/badge/-GNU_Bash-4EAA25?logo=GNU-Bash&style=flat-square&labelColor=282828)](https://www.gnu.org/software/bash/) [![Vagrant](https://img.shields.io/badge/-Vagrant-1563FF?logo=vagrant&style=flat-square&logoColor=1563FF&labelColor=282828)](https://www.vagrantup.com/) |

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

## Return value

Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

---

## Example

### Clone repo using HTTPS

`$ git clone https://github.com/diegozencode/printf.git`

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
`$ gcc -Wall -pedantic -Werror Wextra *.c`

---

## Contribution

Create a new branch with the name of your feature or fix and make a pull request to develop branch explaining your work.

---

## Authors

- **David Bravo** - [dbravo0](https://github.com/dbravo0)
- **Diego Monroy** (@diegozencode) - [<img src="https://img.shields.io/badge/-@diegozencode-000000?style=flat&logo=X&logoColor=white" alt="Twitter - @diegozencode" />](https://twitter.com/diegozencode) |
  [<img src="https://img.shields.io/badge/-@diegozencode-0072b1?style=flat&logo=Linkedin&logoColor=white" alt="LinkedIn - Diego Felipe Monroy" />](https://www.linkedin.com/in/diegozencode/) |
  [<img src="https://img.shields.io/badge/-diegozencode.com-4EAA25?style=flat&logo=Paperswithcode&logoColor=white" alt="Personal Website - diegozencode.com"/>](https://portfolio.diegozencode.com/)
