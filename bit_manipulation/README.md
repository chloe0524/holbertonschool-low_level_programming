# Tasks

- [Task 0.0](#task-00)
- [Task 1.1](#task-11)
- [Task 2.10](#task-210)
- [Task 3.11](#task-311)
- [Task 4.100](#task-4100)
- [Task 5.101](#task-5101)

## Task 0.0

**Mandatory**

Write a function that converts a binary number to an unsigned int.

- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- `b` is pointing to a string of 0 and 1 chars.
- **Return:** the converted number, or 0 if there is one or more chars in the string `b` that is not 0 or 1.
- `b` is NULL.

## Task 1.1

**Mandatory**

Write a function that prints the binary representation of a number.

- **Prototype:** `void print_binary(unsigned long int n);`
- **Format:** see example.
- You are not allowed to use arrays. 
- You are not allowed to use malloc.
- You are not allowed to use the % or / operators.

## Task 2.10

**Mandatory**

Write a function that returns the value of a bit at a given index.

- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to get.
- **Returns:** the value of the bit at index `index` or -1 if an error occurred.

## Task 3.11

**Mandatory**

Write a function that sets the value of a bit to 1 at a given index.

- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to set.
- **Returns:** 1 if it worked, or -1 if an error occurred.

## Task 4.100

**Mandatory**

Write a function that sets the value of a bit to 0 at a given index.

- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to set.
- **Returns:** 1 if it worked, or -1 if an error occurred.

## Task 5.101

**Mandatory**

Write a function that returns the number of bits you would need to flip to get from one number to another.

- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the % or / operators.

