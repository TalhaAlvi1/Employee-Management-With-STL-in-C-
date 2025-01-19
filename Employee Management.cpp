#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

class Employee {
private:
    int id;
    string name;
    string designation;
    double salary;

public:
    Employee(int id, string name, string designation, double salary)
        : id(id), name(name), designation(designation), salary(salary) {}

    int getId() const { return id; }
    string getName() const { return name; }
    string getDesignation() const { return designation; }
    double getSalary() const { return salary; }

    // Setters
    void setName(string newName) { name = newName; }
    void setDesignation(string newDesig) { designation = newDesig; }
    void setSalary(double newSalary) { salary = newSalary; }
};

class EmployeeManagementSystem {
private:
    vector<Employee> employees;

public:
    void addEmployee(int id, string name, string designation, double salary) {
        employees.push_back(Employee(id, name, designation, salary));
        cout << "Employee added successfully!\n";
    }

    void displayAllEmployees() const {
        if (employees.empty()) {
            cout << "No employees to display.\n";
            return;
        }

        cout << "\nEmployee List:\n";
        cout << "ID\tName\tDesignation\tSalary\n";
        cout << "----------------------------------------\n";
        for (const auto& emp : employees) {
            cout << emp.getId() << "\t"
                 << emp.getName() << "\t"
                 << emp.getDesignation() << "\t\t"
                 << emp.getSalary() << "\n";
        }
    }

    void searchEmployee(int id) const {
        auto it = find_if(employees.begin(), employees.end(),
            [id](const Employee& emp) { return emp.getId() == id; });

        if (it != employees.end()) {
            cout << "\nEmployee found:\n";
            cout << "ID: " << it->getId() << "\n";
            cout << "Name: " << it->getName() << "\n";
            cout << "Designation: " << it->getDesignation() << "\n";
            cout << "Salary: " << it->getSalary() << "\n";
        } else {
            cout << "Employee not found!\n";
        }
    }

    void updateEmployee(int id) {
        auto it = find_if(employees.begin(), employees.end(),
            [id](const Employee& emp) { return emp.getId() == id; });

        if (it != employees.end()) {
            string name, designation;
            double salary;

            cout << "Enter new name: ";
            cin >> name;
            cout << "Enter new designation: ";
            cin >> designation;
            cout << "Enter new salary: ";
            cin >> salary;

            it->setName(name);
            it->setDesignation(designation);
            it->setSalary(salary);

            cout << "Employee information updated successfully!\n";
        } else {
            cout << "Employee not found!\n";
        }
    }

    void deleteEmployee(int id) {
        auto it = remove_if(employees.begin(), employees.end(),
            [id](const Employee& emp) { return emp.getId() == id; });

        if (it != employees.end()) {
            employees.erase(it, employees.end());
            cout << "Employee deleted successfully!\n";
        } else {
            cout << "Employee not found!\n";
        }
    }
};

int main() {
    EmployeeManagementSystem ems;
    int choice, id;
    string name, designation;
    double salary;

    while (true) {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Designation: ";
                cin >> designation;
                cout << "Enter Salary: ";
                cin >> salary;
                ems.addEmployee(id, name, designation, salary);
                break;

            case 2:
                ems.displayAllEmployees();
                break;

            case 3:
                cout << "Enter Employee ID to search: ";
                cin >> id;
                ems.searchEmployee(id);
                break;

            case 4:
                cout << "Enter Employee ID to update: ";
                cin >> id;
                ems.updateEmployee(id);
                break;

            case 5:
                cout << "Enter Employee ID to delete: ";
                cin >> id;
                ems.deleteEmployee(id);
                break;

            case 6:
                cout << "Thank you for using Employee Management System!\n";
                return 0;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
