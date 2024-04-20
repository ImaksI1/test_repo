#include <iostream>
#include <string>

using namespace std;

struct Student {
	string firstname;
	string lastname;
	int age;
	string groupname;

	string getInfo() {
		string s = firstname + " " + lastname + "\nAge: " + to_string(age)
			+ "\nGroup: " + groupname;
		return s;
	}
};