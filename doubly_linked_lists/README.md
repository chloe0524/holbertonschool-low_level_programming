# :spiral_notepad: C- Doubly linked lists
![pain-all-i-f9fbbce4bd](https://github.com/chloe0524/holbertonschool-low_level_programming/assets/127857895/978fa947-e42f-4f75-96c8-c1303d726c29)

- [0. Print list](#0-print-list-mandatory)
- [1. List length](#1-list-length-mandatory)
- [2. Add node](#2-add-node-mandatory)
- [3. Add node at the end](#3-add-node-at-the-end-mandatory)
- [4. Free list](#4-free-list-mandatory)
- [5. Get node at index](#5-get-node-at-index-mandatory)
- [6. Sum list](#6-sum-list-mandatory)
- [7. Insert at index](#7-insert-at-index-mandatory)
- [8. Delete at index](#8-delete-at-index-mandatory)

---

## 0. Print list (mandatory)

Write a function that prints all the elements of a `dlistint_t` list.

**Prototype:** `size_t print_dlistint(const dlistint_t *h);`

**Return:** the number of nodes

**Format:** see example

---

## 1. List length (mandatory)

Write a function that returns the number of elements in a linked `dlistint_t` list.

**Prototype:** `size_t dlistint_len(const dlistint_t *h);`

---

## 2. Add node (mandatory)

Write a function that adds a new node at the beginning of a `dlistint_t` list.

**Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`

**Return:** the address of the new element, or NULL if it failed

---

## 3. Add node at the end (mandatory)

Write a function that adds a new node at the end of a `dlistint_t` list.

**Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`

**Return:** the address of the new element, or NULL if it failed

---

## 4. Free list (mandatory)

Write a function that frees a `dlistint_t` list.

**Prototype:** `void free_dlistint(dlistint_t *head);`

---

## 5. Get node at index (mandatory)

Write a function that returns the nth node of a `dlistint_t` linked list.

**Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

- where index is the index of the node, starting from 0
- if the node does not exist, return NULL

---

## 6. Sum list (mandatory)

Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

**Prototype:** `int sum_dlistint(dlistint_t *head);`

- if the list is empty, return 0

---

## 7. Insert at index (mandatory)

Write a function that inserts a new node at a given position.

**Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

- where idx is the index of the list where the new node should be added. Index starts at 0
- Returns: the address of the new node, or NULL if it failed
- if it is not possible to add the new node at index idx, do not add the new node and return NULL
- your files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled during the correction

---

## 8. Delete at index (mandatory)

Write a function that deletes the node at index index of a `dlistint_t` linked list.

**Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

- where index is the index of the node that should be deleted.
- Index starts at 0
- Returns: 1 if it succeeded, -1 if it failed

