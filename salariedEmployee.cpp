/* File: salariedEmployee.cpp */

#include "salariedEmployee.hpp"
//#include "employee.hpp"
#include <iomanip>
//#include <stdlib.h>
#include <iostream> 
#include <string>


//Parametrized Constructor

/*
int _monthlySalary;
long _IDnum;
int _departmentCode;
std::string _FirstName;
std::string _LastName;
std::string _Minitial;
*/

SalariedEmployee::SalariedEmployee(long id, const std::string &lastName, const std::string &firstName, const std::string &initial, int depCode, int salary)
{
	monthlySalary = salary;
	myIdNum = id;
	myDeptCode = depCode;
	myFirstName = firstName;
	myLastName = lastName;
	myMiddleInitial= initial;
}

//setter for the salary of employee

void SalariedEmployee::setSalary(int salary)
{
	monthlySalary = salary;
}

//getter for salary of employee

int SalariedEmployee::getSalary()
{
	return monthlySalary;
}

// salary calculation function
double SalariedEmployee::calculateSalary()
{
	double fractionOftime = 1.0;
	monthlySalary = monthlySalary*fractionOftime;
	return monthlySalary;
}

//print function
void SalariedEmployee::printFunctionforSalariedEmpl()
{
	//use the methods from employee.hpp and employee.cpp
	// e.g. from test.cpp: 001, "Jones", "Booker", "T", 22
	std::cout << "\n";
	std::cout << "Employee ID Number: " << Employee::getIdNum() << "\n";
	std::cout << "Name: " << Employee::getLastName() << " , " << Employee::getFirstName() << ", " << getMiddleInitial() << "\n";
	std::cout << "Department Code: " << Employee::getDeptCode() << "\n";
	std::cout << "Employee Salary: " << SalariedEmployee::calculateSalary() << "\n";
}








