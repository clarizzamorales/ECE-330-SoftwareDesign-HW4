/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.hpp"
#include "salariedEmployee.hpp"
#include "hourlyEmployee.hpp"


using namespace std;

int main() 
{

std::cout << "\n";  
std::cout << "Print Employee 1,2,3 Salary Information: ";
std::cout << "\n"; 
 // full time = 28000, half-time: 14000
 SalariedEmployee employee1(001, "Jones", "Booker", "T", 22, 14000); // half time employee
 SalariedEmployee employee2 (002, "Hendrix", "Jimi", "NMI ", 14, 32000);
 SalariedEmployee employee3 (003, "Morrison", "Jim", "D", 03, 28000); // full time employee

 employee1.printFunctionforSalariedEmpl();
 employee2.printFunctionforSalariedEmpl();
 employee3.printFunctionforSalariedEmpl();

std::cout << "\n"; 
std::cout << "Print Employee 4,5,6 Hourly Information: ";
std::cout << "\n"; 
//(long id, const std::string &lastName, const std::string &firstName, const std::string &initial,int deptCode, int totalHrs, double hourRate);
// full time = 40 hrs, half time = 20 hours 
 HourlyEmployee employee4(004, "Richardson", "Samantha", "M", 11, 34, 12);
 HourlyEmployee employee5(005, "Smith", "Laura", "K", 67, 40, 14); // full time employee
 HourlyEmployee employee6(006, "Lavisky", "Alexandra", "S", 05, 20, 14); // half time employee
  
 employee4.printFunctionforHourlyEmpl();
 employee5.printFunctionforHourlyEmpl();
 employee6.printFunctionforHourlyEmpl();

std::cout << "\n"; 
std::cout << "Print Employee 1 and 5 information using printEmployee() from Employee.cpp: ";
std::cout << "\n"; 
employee1.printEmployee();
employee5.printEmployee();

return 0;
}
