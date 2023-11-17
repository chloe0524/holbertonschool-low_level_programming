# Tasks
![this-is-fine-fire](https://github.com/chloe0524/holbertonschool-low_level_programming/assets/127857895/db532f4c-55f6-4ab5-ad22-e7e33c5c42fc)

## Task 0: 98 Battery st.
**Mandatory**
- Write a function that takes a pointer to an int as a parameter and updates the value it points to 98.

  **Prototype:** `void reset_to_98(int *n);`

## Task 1: Don't swap horses in crossing a stream
**Mandatory**
- Write a function that swaps the values of two integers.

  **Prototype:** `void swap_int(int *a, int *b);`

## Task 2: This report, by its very length, defends itself against the risk of being read
**Mandatory**
- Write a function that returns the length of a string.

  **Prototype:** `int _strlen(char *s);`

  FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

## Task 3: I do not fear computers. I fear the lack of them
**Mandatory**
- Write a function that prints a string, followed by a new line, to stdout.

  **Prototype:** `void _puts(char *str);`

  FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

## Task 4: I can only go one way. I've not got a reverse gear
**Mandatory**
- Write a function that prints a string, in reverse, followed by a new line.

  **Prototype:** `void print_rev(char *s);`

## Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
**Mandatory**
- Write a function that reverses a string.

  **Prototype:** `void rev_string(char *s);`

## Task 6: Half the lies they tell about me aren't true
**Mandatory**
- Write a function that prints every other character of a string, starting with the first character, followed by a new line.

  **Prototype:** `void puts2(char *str);`

## Task 7: Winning is only half of it. Having fun is the other half
**Mandatory**
- Write a function that prints half of a string, followed by a new line.
  The function should print the second half of the string if the number of characters is odd, and the last n characters of the string if the length is even, where n = (length_of_the_string - 1) / 2.

  **Prototype:** `void puts_half(char *str);`

## Task 8: Arrays are not pointers
**Mandatory**
- Write a function that prints n elements of an array of integers, followed by a new line.
  Numbers must be separated by a comma and a space, and displayed in the same order as they are stored in the array.
  You are allowed to use `printf`.

  **Prototype:** `void print_array(int *a, int n);`

## Task 9: strcpy
**Mandatory**
- Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

  **Prototype:** `char *_strcpy(char *dest, char *src);`

  Return value: the pointer to dest.
  FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.

## Task 10: Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
**Mandatory**
- Write a function that converts a string to an integer.
  The number in the string can be preceded by an infinite number of characters.
  You need to take into account all the - and + signs before the number.
  If there are no numbers in the string, the function must return 0.
  You are not allowed to use long, declare new variables of "type" array, or hard-code special values.
  We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.
  FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.

  **Prototype:** `int _atoi(char *s);`

