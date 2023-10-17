#include "../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name\n";
	string first_name;
	cin >> first_name;
	cout << "Please enter your friend's name\n";
	string friend_name;
	cin >> friend_name;
	cout << "Please enter your friend's gender (m, f, o)\n";
	char friend_gender;
	cin >> friend_gender;
	string friend_pronoun;
	if (friend_gender == 'm') {
		friend_pronoun = "him";
	} else if (friend_gender == 'f') {
		friend_pronoun = "her";
	} else {
		friend_pronoun = "them";
	}
	cout << "Please enter your friend's age\n";
	int friend_age;
	cin >> friend_age;
	if (friend_age < 0 || friend_age > 110) {
		simple_error("you're kidding!");
	}

	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you? I am fine.  I miss you.\n";
	cout << "Have you seen " << friend_name << " lately?\n";
	cout << "If you see " << friend_name << " please ask " << friend_pronoun << " to call me.\n";
	cout << "I hear you just had a birthday and you are " << friend_age << " years old.\n";
	if (friend_age < 12) {
		cout << "Next year you will be " << friend_age+1 << ".\n";
	} else if (friend_age == 17) { 
		cout << "Next year you will be able to vote.\n";
	} else if (friend_age > 70) {
		cout << "I hope you are enjoying retirement.\n";
	}
	cout << "Yours sincerely,\n";

	return 0;
}
