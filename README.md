# Employee Management System with STL

## Overview

This project is a simple **Employee Management System** implemented in C++ using the **Standard Template Library (STL)**. The system allows you to manage employee records, including adding, deleting, updating, and displaying employee information. The program leverages STL containers like `std::vector` and `std::map` to store and manipulate employee data efficiently.

## Features

- **Add Employee**: Add a new employee with details such as ID, name, age, and department.
- **Delete Employee**: Remove an employee by their ID.
- **Update Employee**: Modify the details of an existing employee.
- **Display Employees**: List all employees with their details.
- **Search Employee**: Search for an employee by their ID.
- **Sort Employees**: Sort employees by ID, name, or department.
- **Save/Load Data**: Save employee data to a file and load it back when the program starts.

## Prerequisites

- **C++ Compiler** (e.g., g++, clang, or MSVC)
- Basic knowledge of **C++** and **STL**

## Getting Started

### Clone the Repository

```bash
git clone https://github.com/TalhaAlvi1/Employee-Management-With-STL-in-C-.git
cd Employee-Management-With-STL
```

### Compile the Program

To compile the program, use the following command:

```bash
g++ -std=c++11 -o employee_management main.cpp
```

### Run the Program

After compiling, run the program using:

```bash
./employee_management
```

## Usage

1. **Add Employee**: Choose the option to add a new employee and enter the required details.
2. **Delete Employee**: Select the delete option and provide the employee ID to remove.
3. **Update Employee**: Choose the update option, enter the employee ID, and update the details.
4. **Display Employees**: Select the display option to view all employees.
5. **Search Employee**: Use the search option to find an employee by their ID.
6. **Sort Employees**: Sort employees by ID, name, or department.
7. **Save/Load Data**: Save the current employee data to a file or load data from a file.

## Code Structure

- `main.cpp`: The main file containing the program logic and menu-driven interface.
- `Employee.h`: Header file defining the `Employee` class.
- `Employee.cpp`: Implementation of the `Employee` class methods.
- `data.txt`: File used to store employee data persistently.

## Example

```cpp
#include <iostream>
#include <vector>
#include <map>
#include "Employee.h"

int main() {
    std::vector<Employee> employees;
    std::map<int, Employee> employeeMap;

    // Example usage
    Employee emp1(1, "John Doe", 30, "Engineering");
    employees.push_back(emp1);
    employeeMap[emp1.getId()] = emp1;

    // Display all employees
    for (const auto& emp : employees) {
        emp.display();
    }

    return 0;
}
```

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes.

## License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- **C++ Standard Template Library (STL)**
- Various online resources and tutorials

## Contact

For any questions or suggestions, please feel free to reach out:

- **Your Name**
- **Email**: talhahassanalvi786@gmail.com
- **GitHub**: https://github.com/TalhaAlvi1

---

Enjoy managing your employees with this simple yet powerful system! 🚀

---

Now the bold text will render correctly on GitHub! Let me know if you need further assistance. 😊
