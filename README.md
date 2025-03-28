.\" *********************************
.\" man page for _printf (section 3)
.\" *********************************
.TH _PRINTF 3 "March 2025" "Holberton School" "C Library Functions"
.SH NAME
_printf \- produce output according to a format
.SH SYNOPSIS
.B #include <main.h>
.sp
.B int _printf(const char *format, ...);
.SH DESCRIPTION
The
.B _printf()
function produces output according to a format string,
which is composed of zero or more directives.
The directives are used to specify how
arguments (provided after the format string) are converted for output.
.sp
Currently supported conversion specifiers are:
.RS 4
.IP \fB%c\fR
Prints a single character.
.IP \fB%s\fR
Prints a string of characters.
.IP \fB%%\fR
Prints a literal percent sign (\fB%\fR).
.IP \fB%d\fR, \fBi\fR
Prints signed decimal integers.
.RE

Unrecognized specifiers are printed literally as "%x", where x
is the unrecognized specifier.

The
.B _printf()
function returns the number of characters printed (excluding
the terminating null byte used to end output to strings).

If
.I format
is NULL, the function returns \-1.

.SH RETURN VALUE
Upon successful return, the
.B _printf()
function returns the number of characters printed.
If an output error is encountered, a negative value is returned.

.SH EXAMPLES
.nf
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s!\\n", "World");
    /* prints: Hello, World!
       len should be 13 */

    _printf("Number: %d\\n", 98);
    /* prints: Number: 98 */

    return (0);
}
.fi

.SH SEE ALSO
printf(3)

.SH AUTHOR
Written by the Holberton School team as part of the C curriculum.

.SH BUGS
No known bugs at this time.

.\" End of man page
