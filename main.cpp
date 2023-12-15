#include <iostream>

int main()
{
    int salary1;
    std::cout << "Enter the salary of the first employee: ";
    std::cin >> salary1;

    int salary2;
    std::cout << "Enter the salary of the second employee: ";
    std::cin >> salary2;

    int salary3;
    std::cout << "Enter the salary of the third employee: ";
    std::cin >> salary3;

    std::cout << "-----We count-----" << std::endl;

    int maximumSalary = salary1;
    if (maximumSalary < salary2) maximumSalary = salary2;
    if (maximumSalary < salary3) maximumSalary = salary3;

    int minimumSalary = salary1;
    if (minimumSalary > salary2) minimumSalary = salary2;
    if (minimumSalary > salary3) minimumSalary = salary3;

    std::cout << "Highest salary in the department: " << maximumSalary << std::endl;
    std::cout << "Difference between the highest and lowest salary in the department:" << maximumSalary - minimumSalary << std::endl;
    std::cout << "Average salary in the department: " << (salary1 + salary2 + salary3) / 3 << std::endl;
}
