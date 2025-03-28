# _printf

A custom implementation of the standard C `printf` function, created as part of the Holberton School low-level programming curriculum.

---

## Manual Page for `_printf`

### 1. NAME
**_printf** - Custom implementation of the standard `printf` function.

---

### 2. SYNOPSIS
```c
#include "main.h"

int _printf(const char *format, ...);
```

---

### 3. DESCRIPTION
The `_printf()` function is a simplified re-implementation of the standard C `printf` function. It takes a format string and replaces specific format specifiers with values provided through variadic arguments using macros from `<stdarg.h>`.

**Currently supported conversion specifiers:**
- `%c` : Prints a single character.
- `%s` : Prints a string.
- `%%` : Prints a literal percent sign.
- `%d` : Prints a signed decimal integer.
- `%i` : Prints a signed decimal integer.

**Not supported:**
- Flags (e.g., `+`, `-`, `#`)
- Field width
- Precision
- Length modifiers (e.g., `l`, `h`)

Unrecognized format specifiers will be printed as a literal combination of `%` and the unknown character.

---

### 4. RETURN VALUE
- Returns the total number of characters printed (excluding the null byte).
- Returns `-1` if the format string is `NULL` or if an incomplete format specifier is encountered.

---

### 5. EXAMPLES

```c
_printf("Hello, %s!\n", "Holberton");
// Output: Hello, Holberton!

_printf("Character: %c\n", 'A');
// Output: Character: A

_printf("Progress: 100%% complete\n");
// Output: Progress: 100% complete

_printf("Score: %d out of %i\n", 95, 100);
// Output: Score: 95 out of 100
```

---

### 6. AUTHOR
Developed by:
- Suhail Alaboud  
- Mohammed Alzahrani  

As part of the Holberton School C programming curriculum.

---


