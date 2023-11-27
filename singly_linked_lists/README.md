# :spiral_notepad: Singly Linked Lists

![owgc2k3v0yz91](https://github.com/chloe0524/holbertonschool-low_level_programming/assets/127857895/030a6bbc-4566-436e-ba27-0b163203a65d)

- [0. Print list](#0-print-list-mandatory)
- [1. List length](#1-list-length-mandatory)
- [2. Add node](#2-add-node-mandatory)
- [3. Add node at the end](#3-add-node-at-the-end-mandatory)
- [4. Free list](#4-free-list-mandatory)

## 0. Print list (mandatory)

Write a function that prints all the elements of a `list_t` list.

- **Prototype:** `size_t print_list(const list_t *h);`
- **Return:** the number of nodes
- **Format:** see example
- If `str` is `NULL`, print `[0] (nil)`
- You are allowed to use `printf`

## 1. List length (mandatory)

Write a function that returns the number of elements in a `list_t` linked list.

- **Prototype:** `size_t list_len(const list_t *h);`

## 2. Add node (mandatory)

Write a function that adds a new node at the beginning of a `list_t` list.

- **Prototype:** `list_t *add_node(list_t **head, const char *str);`
- **Return:** the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

## 3. Add node at the end (mandatory)

Write a function that adds a new node at the end of a `list_t` list.

- **Prototype:** `list_t *add_node_end(list_t **head, const char *str);`
- **Return:** the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

## 4. Free list (mandatory)

Write a function that frees a `list_t` list.

- **Prototype:** `void free_list(list_t *head);`

