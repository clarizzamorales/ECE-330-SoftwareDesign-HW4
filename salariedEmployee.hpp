/* File: salariedEmployee.hpp */

#include "employee.hpp"
#//include <iostream>
#include <string>


class SalariedEmployee:public Employee{

	/*
	int monthlySalary;
	long _IDnum;
	int _departmentCode;
	std::string _FirstName;
	std::string _LastName;
	std::string _Minitial;
*/
public:

	SalariedEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, int =0);
	int monthlySalary;
	void setSalary(int salary);
	int getSalary();
	double calculateSalary();
	void printFunctionforSalariedEmpl();

};

//long _IDnum, const std::string &_LastName, const std::string &_FirstName, const std::string &_Minitial, int _departmentCode, int salary
