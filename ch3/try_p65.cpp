#include "../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age in years\n";
	string first_name = "";
	double age_years= 0;
	cin >> first_name;
	cin >> age_years;
	double age_months = age_years * 12;
	cout << "Hello, " << first_name << " (age " << age_months << " months)\n";
	return 0;
}
