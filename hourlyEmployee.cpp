/* File: hourlyEmployee.cpp */

#include "hourlyEmployee.hpp"
#include <iostream>
#include <iomanip>
#include <string>

HourlyEmployee::HourlyEmployee(long id, const std::string &lastName, const std::string &firstName, const std::string &initial,int deptCode, int totalHrs, int hourRate)
{
	totalHours = totalHrs;
	hourlyRate = hourRate;
	WeeklyPayment = 0;
	overtime = 0; 
	myLastName = lastName;
	myFirstName = firstName;
	myMiddleInitial = initial;
	myDeptCode = deptCode;
	myIdNum = id;

}

void HourlyEmployee::setTotalHoursWorked(int totalHrs)
{
	totalHours = totalHrs;
}
int HourlyEmployee::getTotalHoursWorked()
{
	return totalHours;
}

void HourlyEmployee::setHourlyRate(int hourRate)
{
	hourlyRate = hourRate;
}
int HourlyEmployee::getHourlyRate()
{
	return hourlyRate;
}

double HourlyEmployee::calculatedHourlyPayment()
{
	//e.g toal hrs = 50, then 50 > 40, 50 - 40 = 10 overtime hours, (normalRate*overtime*1.5 + 40*normalRate)
	if ( totalHours > 40){
		overtime = totalHours-40;
		WeeklyPayment = ((hourlyRate*40) + (hourlyRate*overtime*1.5));
		return WeeklyPayment;
	}
	else{
		// e.g total hrs = 15 , 15*normalRate = totalPayment
		WeeklyPayment = (hourlyRate*totalHours);
		return WeeklyPayment;
	}

}

void HourlyEmployee::printFunctionforHourlyEmpl()
{

std::cout << "\n";
std::cout << "Employee ID Number: " << Employee::getIdNum() << "\n";
std::cout << "Name: " << Employee::getLastName() <<", " << Employee::getFirstName() << " " << Employee::getMiddleInitial() <<"." << "\n";
std::cout << "Department Code: " << Employee::getDeptCode() << "\n";
std::cout << "Total Hours Worked : " << HourlyEmployee::getTotalHoursWorked() << "\n";
std::cout << "Hourly Rate : " << HourlyEmployee::getHourlyRate() << "\n";
std::cout << "Employee Weekly Payment : " << HourlyEmployee::calculatedHourlyPayment() << "\n";
}













