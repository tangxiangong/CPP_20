//
// Created by 小雨 on 2024/11/12.
//
#include <iostream>
#include <format>

export module employee;

export struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};

export void show(Employee employee) {
    std::cout << std::format("Employee: {}{}", employee.firstInitial, employee.lastInitial) << std::endl;
    std::cout << std::format("Number: {}", employee.employeeNumber) << std::endl;
    std::cout << std::format("Salary: ${}", employee.salary) << std::endl;
}