.TH _PRINTF 3 "March 2025" "Holberton School" "C Library Functions"

.SH NAME
_printf \- Custom implementation of the standard printf function

.SH SYNOPSIS
.B #include "main.h"
.br
.B int _printf(const char *format, ...);

.SH DESCRIPTION
The
.B _printf()
function is a simplified re-implementation of the standard C library's printf function. It produces formatted output by parsing a format string and replacing specific format specifiers with provided values.

Currently, the supported conversion specifiers are:

.TP
.B %c
Prints a single character.

.TP
.B %s
Prints a string.

.TP
.B %%
Prints a literal percent sign.

Additional specifiers such as
.B %d, %i, %u, %o, %x, %X, %p
may also be supported depending on the project level.

Unrecognized format specifiers will be printed as literal characters, starting with '%'.

.SH RETURN VALUE
Upon successful completion, the
.B _printf()
function returns the total number of characters printed (excluding the null byte).

If
.I format
is NULL or invalid, the function returns -1.

.SH EXAMPLES
.B Example 1:
.br
_printf("Hello, %s!\n", "Holberton");
.br
Output: "Hello, Holberton!"

.B Example 2:
.br
_printf("Character: %c\n", 'A');
.br
Output: "Character: A"

.B Example 3:
.br
_printf("100%% sure\n");
.br
Output: "100% sure"

.SH AUTHOR
Written by Suhail Alaboud and Mohammed Alzahrani as part of the Holberton School C programming curriculum.

.SH SEE ALSO
.BR printf (3),
.BR write (2),
.BR va_start (3),
.BR va_arg (3),
.BR va_end (3)
