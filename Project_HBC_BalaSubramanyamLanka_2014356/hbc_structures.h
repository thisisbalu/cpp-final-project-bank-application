// STRUCTURES

struct Contract {
	string education;
	int year_of_education;
	double hours_per_week;
	double hourly_rate;
	double weekly_salary;
};

struct Employee {
	long employee_number;
	string first_name;
	string last_name;
	Contract contract;
};