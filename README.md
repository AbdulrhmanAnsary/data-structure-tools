# Data Structure Tools

**Data Structure Tools** is a C++ library providing helpful utilities for working with various data structures, including arrays and STL containers like `vector`, `list`, and more. This library aims to simplify common operations, such as filling data structures with random values, checking if they’re sorted, and printing contents.

## Features

- **Random Data Insertion**: Easily fill arrays or STL containers with random values.
- **Sort Checking**: Determine if a container is sorted in ascending or descending order.
- **Flexible Printing**: Print any STL container or C-style array with ease.
- **Template Support**: Generic functions allow usage across different container types.

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/data-structure-tools.git
    ```
2. Include the `data_structure_tools.h` file in your project:
    ```cpp
    #include "data_structure_tools.h"
    ```

## Usage

### Example Code
Here's a sample usage of the library's features:

```cpp
#include <iostream>
#include <vector>
#include "data_structure_tools.h"

int main() {
    DataStructureTools tools;
    
    std::vector<int> numbers;
    tools.randomFill(numbers, 10);
    tools.print(numbers);
    
    bool is_sorted = tools.isSorted(numbers);
    std::cout << "Is sorted: " << (is_sorted ? "Yes" : "No") << std::endl;

    return 0;
}
```

## Examples of functions

randomFill(container, size): Fills the given container with random values.

isSorted(container, ascending): Checks if the container is sorted in ascending or descending order.

print(container): Prints the contents of the container in a formatted style.


## Contributing

1. Fork the repository.


2. Create a new branch with a descriptive name.


3. Make your changes and commit them.


4. Push to your fork and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](/LICENSE) file for details.

---

Enjoy using Data Structure Tools to make working with data structures in C++ easier and more intuitive!