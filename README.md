# _Printf Project by Luidgi Watson & Philippe Lapique

This group project was carried out as part of the Holberton School curriculum. The goal was to implement a simplified version of the `printf` function from the `<stdio.h>` library in the C programming language.

---

## 🎯 Project Objectives

1. Handle characters with `%c`
2. Handle strings with `%s`
3. Handle signed integers (decimal) with `%d` and `%i`
4. Handle the percent symbol `%%`

---

## 🚫 Project Limitations and Constraints

We were **allowed** to use the following functions:

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

However, we were **not allowed** to:

- Use any function from the standard `<stdio.h>` library
- Use `if` or `switch` statements
- Handle flag characters (e.g., `+`, `-`, `#`)
- Handle field width
- Handle precision
- Handle length modifiers (`l`, `h`, etc.)

---

## 🗂️ Project Organization

**Estimated time to complete**: 35 hours  
Work was done entirely in person on campus (Bordeaux), with equal task distribution:

- **Mr. Lapique** was responsible for Task 0: handling strings and characters.
- **Mr. Watson** was responsible for Task 1: handling integers and decimals.

Work was carried out using two separate branches. A pull request was used to merge everything into the main branch at the end of the project. Regular check-ins were conducted to review each other's code and progress.

---

## 🧱 Project Structure

We decided to split the code into multiple files to better divide the tasks and to isolate functionalities for easier debugging and testing.

- `README.md` : Contains explanations about the project and its structure
- `tool_char.c` : Handles character input (`%c`)
- `tool_string.c` : Handles string input (`%s`)
- `tool_int.c` : Handles signed integer input (both negative and positive)
- `_printf.c` : Main `_printf` function, which calls the appropriate tool function based on the format type using a structure table called `atlas`
- `main.c` : Contains different test cases used to verify the behavior of `_printf`
- `main.h` : Header file containing function prototypes, necessary libraries, and the structure definition
- `man_page_printf` : Manual page for using the function
  
<img width="458" height="502" alt="Main h" src="https://github.com/user-attachments/assets/8181c689-f4f3-4dbc-b59b-58f135ff0bd0" />

---

## 🛠️ Compilation

To compile the project, use the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf

## Example Usage

<img width="926" height="800" alt="utilisation" src="https://github.com/user-attachments/assets/14216ad9-0932-477d-9361-00afc021cd36" />

## 🚀 Future Improvements 

The function could be significantly improved by adding support for:
  - Unsigned integers [%u]
  - Unsigned octal values [%o]
  - Unsigned hexadecimal values [%x, %X]
  - Pointer addresses [%p]

It would also be helpful to add proper handling for integer overflow and define MIN/MAX limits to prevent memory issues.

📌 Important Note:
If you're planning to add new features, don't forget to manage memory properly using malloc and free. Use the valgrind tool in the terminal to test for memory leaks.

## Man Page

For more information about how the function works or how to troubleshoot errors, refer to the manual page man_page_printf included in the project folder.
