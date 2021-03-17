run_employee: test.o employee.o salariedEmployee.o hourlyEmployee.o
	g++ test.o employee.o salariedEmployee.o hourlyEmployee.o -o run_employee

test.o: test.cpp salariedEmployee.hpp employee.hpp hourlyEmployee.hpp
	g++ -c test.cpp

employee.o: employee.cpp employee.hpp
	g++ -c employee.cpp

salariedEmployee.o: salariedEmployee.cpp salariedEmployee.hpp employee.hpp
	g++ -c salariedEmployee.cpp

hourlyEmployee.o: hourlyEmployee.cpp hourlyEmployee.hpp 
	g++ -c hourlyEmployee.cpp


clean:
	rm *.o
	rm run_employee
