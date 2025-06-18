# Custom printf()

This project implements a custom version of the C standard library function `printf`. The custom `printf` function provides formatted output to the standard output, supporting a subset of the standard format specifiers.

## Features

- Handles common format specifiers such as `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
- Supports variable argument lists.
- Designed for educational purposes to demonstrate how formatted output functions work internally.

## Usage

1. **Compile the code:**
   ```sh
   gcc -Wall -Wextra -Werror -pedantic *.c -o my_printf
   ```

2. **Include the header in your C files:**
   ```c
   #include "main.h"
   ```

3. **Call the custom printf function:**
   ```c
   _printf("Hello, %s! Number: %d\n", "world", 42);
   ```

## Files

- `main.h` — Header file with function prototypes.
- `_printf.c` — Main implementation of the custom printf function.
- `utils.c` — Helper functions for formatting and output.
- `man_3_printf` — Manual page for usage instructions.

## Example

```c
_printf("Character: %c, String: %s, Decimal: %d\n", 'A', "test", 123);
```

## Limitations

- Supports basic format specifiers: %c (character), %s (string), %d and %i (integers)
- Buffer size limited to 1024 characters
- Does not support field width or precision modifiers
- No support for length modifiers (l, h, ll, etc.)
- Cannot handle floating-point numbers (%f, %e, %g)
- Special characters like \t, \n must be passed directly

## Author

- Michael 

## License
