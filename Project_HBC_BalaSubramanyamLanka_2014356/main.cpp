using namespace std;
#include<iostream>
#include<string>
#include "hbc_structures.h"
#include "hbc_prototypes.h"

int main() {
	Employee employees[MAX_EMPLOYEES];
	Employee *first_ptr = &employees[0], *last_ptr;
	int selection, employee_count = 0;
	bool keep_looping = true;
	do {
		print_menu();
		last_ptr = &employees[employee_count];
		selection = get_selection();
		switch (selection) {
		case 1:
			add_employee(last_ptr);
			employee_count++;
			break;
		case 2:
			if (employee_count > 0) {
				print_employees(first_ptr, last_ptr);
			}
			else {
				cout << "MESSAGE :: There are no Employees to display" << endl;
			}
			break;
		case 3:
			if (employee_count > 0) {
				sort_employee_by_pointer(first_ptr, last_ptr);
			}
			else {
				cout << "MESSAGE :: There are no Employees to SORT" << endl;
			}
			break;
		case 4:
			if (employee_count > 0) {
				search_employee_by_pointer(first_ptr, last_ptr);
			}
			else {
				cout << "MESSAGE :: There are no Employees to SEARCH" << endl;
			}
			break;
		case 5:
			keep_looping = false;
			break;
		default:
			cout << "MESSAGE :: Please choose the correct selection!" << endl;
			break;
		}
	} while (keep_looping);
	system("pause");
	return 0;
}