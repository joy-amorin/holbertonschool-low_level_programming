<h1>Holberton School printf project</h1>

Este proyecto consiste en crear una version reducida de printf, con solo algunos parametros de conversión.
Es el primer proyecto en grupo del programa intensivo de Holberton School.

Parametros de con versión. 
<table>
	<tr>
	<th>type</th>
	<th>description</th>
	</tr>
	</table>
%c	prints a chacarcter
%s	prints a string
%d	prints a decimal
%i	prints an integer
%%	prints '%'

<h2>Requirments</h2>

-Allowed editors: vi, vim, emacs
-All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-All your files should end with a new line
-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-You are not allowed to use global variables
-No more than 5 functions per file

<h2>Authorized functions and macros</h2>

-write (man 2 write)
-malloc (man 3 malloc)
-free (man 3 free)
-va_start (man 3 va_start)
-va_end (man 3 va_end)
-va_copy (man 3 va_copy)
-va_arg (man 3 va_arg)

<h2>Compilation</h2>

The code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c                                       
