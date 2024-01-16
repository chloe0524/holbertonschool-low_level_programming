
# C - Search Algorithms

## Table of Contents

- [Task 0: Linear search](#task-0-linear-search)
- [Task 1: Binary search](#task-1-binary-search)
- [Task 2: Big O #0](#task-2-big-o-0)
- [Task 3: Big O #1](#task-3-big-o-1)
- [Task 4: Big O #2](#task-4-big-o-2)
- [Task 5: Big O #3](#task-5-big-o-3)
- [Task 6: Big O #4](#task-6-big-o-4)

## Tasks

### Task 0: Linear search

Write a function that searches for a value in an array of integers using the Linear search algorithm.

```c
int linear_search(int *array, size_t size, int value);
```

- Where `array` is a pointer to the first element of the array to search.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- Return the first index where the value is located, or -1 if not present.

### Task 1: Binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

```c
int binary_search(int *array, size_t size, int value);
```

- Where `array` is a pointer to the first element of the array to search.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- Return the index where the value is located, or -1 if not present.

### Task 2: Big O #0

Provide the time complexity (worst case) of a linear search in an array of size n.

### Task 3: Big O #1

Provide the space complexity (worst case) of an iterative linear search algorithm in an array of size n.

### Task 4: Big O #2

Provide the time complexity (worst case) of a binary search in an array of size n.

### Task 5: Big O #3

Provide the space complexity (worst case) of a binary search in an array of size n.

### Task 6: Big O #4

Provide the space complexity of:

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
