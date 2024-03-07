![White Minimalist Elegant Handwritten LinkedIn Banner](https://github.com/chloe0524/chloe0524/assets/127857895/8c8b709d-9d88-4c69-95fe-577ade858d0b)

# *``AirBnB clone - The console``*

## Description

This project is a clone of the AirBnB application. It includes a parent class (`BaseModel`) for managing common attributes/methods for other classes, and classes for user, state, city, amenity, place, and review.

## Command Interpreter

The command interpreter is designed to manage the objects of our project. It provides a command line interface.

## Requirements

#### :small_red_triangle: ``Python Scripts``

|                                      |                                                                       |
|--------------------------------------|--------------------------------------------------------------------------|
| **Editors**                          | vi, vim, emacs                                                           |
| **Interpretation/Compilation**       | Ubuntu 20.04 LTS using Python 3.8.5                                      |
| **README.md**                        | Mandatory at the root of the project folder                              |
| **Code Style**                       | Should follow PEP8                           |

#### :small_red_triangle: ``Python Unit Tests``

|                                      |                                                                          |
|--------------------------------------|--------------------------------------------------------------------------|
| **Editors**                          | vi, vim, emacs                                                           |
| **Testing Module**                   | Should use the `unittest` module                                         |
| **Test Execution**                   | Run tests using `python3 -m unittest discover tests` or `python3 -m unittest <test_file>` |

### The console :video_game:

:small_red_triangle: You can start the command interpreter by running the `console.py` in your terminal:

```bash
./console.py
```

### How to use it

 :small_red_triangle: Once the program is running and the command interpreter has started, you can use commands like `create`, `show`, `destroy`, `all`, and `update` to manipulate data.

### Examples

- `create BaseModel`: Creates a new instance of `BaseModel`, saves it to the JSON file, and prints the `id`.

```bash
(hbnb) create BaseModel
fa0636af-8e8a-4642-961c-5c83a23d8d0d
(hbnb)
```

- `show BaseModel 1234-1234-1234`: Prints the string representation of an instance based on the class name and `id`.

```bash
(hbnb) show BaseModel 1234-1234-1234
** no instance found **
(hbnb)
```

- `destroy BaseModel 1234-1234-1234`: Deletes an instance based on the class name and `id`.

```bash
(hbnb) destroy 1234-1234-1234
** class doesn't exist **
(hbnb)
```

## Files

:small_red_triangle: This project includes the following files:
Got it, here's the revised table without the ".py" extension:

| Source Codes                         | Test Files                                               |
|--------------------------------------|----------------------------------------------------------|
| models/base_model                    | tests/test_models/test_base_model.py                     |
| models/user                          | tests/test_models/test_user.py                           |
| models/state                         | tests/test_models/test_state.py                          |
| models/city                          | tests/test_models/test_city.py                           |
| models/amenity                       | tests/test_models/test_amenity.py                        |
| models/place                         | tests/test_models/test_place.py                          |
| models/review                        | tests/test_models/test_review.py                         |
| models/engine/file_storage           | tests/test_models/test_engine/test_file_storage.py       |

```
