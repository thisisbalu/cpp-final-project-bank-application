// PROTOTYPES
void print_menu();
int get_selection();
void add_employee(Employee *);
void print_employees(Employee *, Employee *);
void swap_by_ptr(Employee *, Employee *);
void search_employee_by_reference(Employee emp_arr[], const int MAX);
void search_employee_by_pointer(Employee *, Employee *);
void sort_employee_by_reference(Employee emp_arr[], const int MAX);
void sort_employee_by_pointer(Employee *, Employee *);

// CONSTANTS
const int MAX_EMPLOYEES = 100;