using namespace std;
#include<iostream>
#include<string>
#include "hbc_structures.h"
#include "hbc_prototypes.h"

void swap_by_ptr(Employee *ptr_first_swap, Employee *ptr_second_swap) {
	struct Employee temp;
	temp = *ptr_first_swap;
	*ptr_first_swap = *ptr_second_swap;
	*ptr_second_swap = temp;
}

void sort_employee_by_reference(Employee emp_arr[], const int MAX) {
	cout << "*** Operation SORT Employees - START ***" << endl;
	for (int i = 0; i < MAX; i++) {
		for (int j = i + 1; j < MAX; j++) {
			if (emp_arr[j].employee_number < emp_arr[i].employee_number) {
				struct Employee *ptr_first_swap = &emp_arr[i];
				struct Employee *ptr_last_swap = &emp_arr[j];
				swap_by_ptr(ptr_first_swap, ptr_last_swap);

			}
		}
	}
	cout << "*** Operation SORT Employees - FINISHED ***" << endl;
}

void sort_employee_by_pointer(Employee *first_pointer, Employee *last_pointer) {
	cout << "*** Operation SORT Employees - START ***" << endl;
	for (Employee *pointer_i = first_pointer; pointer_i < last_pointer; pointer_i++) {
		for (Employee *pointer_j = pointer_i+1; pointer_j < last_pointer; pointer_j++) {
			if (pointer_j->employee_number < pointer_i->employee_number) {
				swap_by_ptr(pointer_i, pointer_j);

			}
		}
	}
	cout << "*** Operation SORT Employees - FINISHED ***" << endl;
}

void search_employee_by_reference(Employee emp_arr[], const int MAX) {
	int search;
	Employee employee_result;
	bool found = false;
	cout << "*** Operation SEARCH Employees - START ***" << endl;
	cout << "Enter the Employee Number of the employee you want to search: ";
	cin >> search;
	for (int i = 0; i < MAX; i++) {
		if (emp_arr[i].employee_number == search) {
			found = true;
			employee_result = emp_arr[i];
			if (found) {
				break;
			}
		}
	}
	if (found) {
		cout << "______________________________________________________________" << endl;
		cout << "EMPLOYEE RECORD FOUND" << endl;
		cout << "Employee Number: " << employee_result.employee_number << endl;
		cout << "First Name: " << employee_result.first_name << endl;
		cout << "Last Name: " << employee_result.last_name << endl;
		cout << "Education: " << employee_result.contract.education << endl;
		cout << "Year of Education: " << employee_result.contract.year_of_education << endl;
		cout << "Hourly Rate: " << employee_result.contract.hourly_rate << endl;
		cout << "Hours per Week: " << employee_result.contract.hours_per_week << endl;
		cout << "Weekly Pay: " << employee_result.contract.weekly_salary << endl;
	}
	else {
		cout << "Employee not found" << endl;
	}
	cout << "*** Operation SEARCH Employees - FINISHED ***" << endl;
}

void search_employee_by_pointer(Employee *first_pointer, Employee *last_pointer) {
	int search;
	Employee *employee_result = first_pointer;
	bool found = false;
	cout << "*** Operation SEARCH Employees - START ***" << endl;
	cout << "Enter the Employee Number of the employee you want to search: ";
	cin >> search;
	for (Employee *pointer = first_pointer; pointer < last_pointer; pointer++) {
		if (pointer->employee_number == search) {
			found = true;
			employee_result = pointer;
			if (found) {
				break;
			}
		}
	}
	if (found) {
		cout << "______________________________________________________________" << endl;
		cout << "EMPLOYEE RECORD FOUND" << endl;
		cout << "Employee Number: " << employee_result->employee_number << endl;
		cout << "First Name: " << employee_result->first_name << endl;
		cout << "Last Name: " << employee_result->last_name << endl;
		cout << "Education: " << employee_result->contract.education << endl;
		cout << "Year of Education: " << employee_result->contract.year_of_education << endl;
		cout << "Hourly Rate: " << employee_result->contract.hourly_rate << endl;
		cout << "Hours per Week: " << employee_result->contract.hours_per_week << endl;
		cout << "Weekly Pay: " << employee_result->contract.weekly_salary << endl;
	}
	else {
		cout << "Employee not found" << endl;
	}
	cout << "*** Operation SEARCH Employees - FINISHED ***" << endl;
}

void print_employees(Employee *first_pointer, Employee *last_pointer) {
	int count = 1;
	cout << "*** Operation DISPLAY Employees - START ***" << endl;
	for (Employee *pointer = first_pointer; pointer < last_pointer; pointer++) {
		cout << "______________________________________________________________" << endl;
		cout << "Employee Record " << count << endl;
		cout << "Employee Number: " << pointer->employee_number << endl;
		cout << "First Name: " << pointer->first_name << endl;
		cout << "Last Name: " << pointer->last_name << endl;
		cout << "Education: " << pointer->contract.education << endl;
		cout << "Year of Education: " << pointer->contract.year_of_education << endl;
		cout << "Hourly Rate: " << pointer->contract.hourly_rate << endl;
		cout << "Hours per Week: " << pointer->contract.hours_per_week << endl;
		cout << "Weekly Pay: " << pointer->contract.weekly_salary << endl;
		count++;
	}
	cout << "*** Operation DISPLAY Employees - END ***" << endl;
}

void add_employee(Employee *pointer) {
	string education;
	cout << "*** Operation ADD Employee - START ***" << endl;
	cout << "______________________________________________________________" << endl;
	cout << "Enployee Number: ";
	cin >> pointer -> employee_number;
	cout << "First_name: ";
	cin >> pointer -> first_name;
	cout << "last_name: ";
	cin >> pointer -> last_name;
	do {
		cout << "Education (Allowed values are DEC, BACHELOR, MASTER or PHD): ";
		cin >> education;
		if (education.compare("DEC") == 0 || education.compare("BACHELOR") == 0 || education.compare("MASTER") == 0 || education.compare("PHD") == 0) {

		}
		else {
			cout << "Please enter the valid entries for education. Allowed values are DEC, BACHELOR, MASTER or PHD" << endl;
		} 
	} while (!(education.compare("DEC") == 0 || education.compare("BACHELOR") == 0 || education.compare("MASTER") == 0 || education.compare("PHD") == 0));
	cout << "Year of Education: ";
	cin >> pointer->contract.year_of_education;
	cout << "Hourly Rate: ";
	cin >> pointer->contract.hourly_rate;
	cout << "Hours Per Week: ";
	cin >> pointer->contract.hours_per_week;
	cout << "Weekly Salary: ";
	cin >> pointer->contract.weekly_salary;
	cout << "*** Operation ADD Employee - END ***" << endl;
}

int get_selection() {
	int selection;
	cout << "Enter your selection :";
	cin >> selection;
	return selection;
}

void print_menu() {
	cout << "______________________________________________________________" << endl << endl;
	cout << "                        FORTIS BANK                           " << endl;
	cout << "            Human Resources Management Application            " << endl;
	cout << "______________________________________________________________" << endl << endl;
	cout << "MENU OPTIONS" << endl;
	cout << "\t1. Add an employee into the list of employees" << endl;
	cout << "\t2. Display the list of employees" << endl;
	cout << "\t3. Sort the employees by social security number" << endl;
	cout << "\t4. Search for an employee by identification number" << endl;
	cout << "\t5. Exit" << endl << endl;
}