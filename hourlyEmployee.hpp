/* File: hourlyEmployee.hpp */

#include "employee.hpp"
#include <string>

class HourlyEmployee: public Employee{

public:

	HourlyEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, int=0, int=0);
	int totalHours;
	int hourlyRate;
	int overtime;
	double WeeklyPayment;
	void setTotalHoursWorked(int totalHours);
	int getTotalHoursWorked();
	void setHourlyRate(int hourRate);
	int getHourlyRate();
	double calculatedHourlyPayment();
	void printFunctionforHourlyEmpl();

};
