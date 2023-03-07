#include "Employee.h"
#include "FileManager.h"
Employee::Employee() {
	salary = 5000;
	firstBalance = 0;
}

void Employee::setSalary(double salary) {
	if (Validation::validateSalary(salary) == false)
		cout << "invalid salary " << endl;
	this->salary = salary;
}
void Employee::setSalaryString(string s) {
	if (s == to_string(salary))
		salarystr = s;
}
double Employee::getFirstBalance() {
	return firstBalance;
}

//void Employee::setBalance(double b) {
//	if (Validation::validateBalance(b) == false) {
//		cout << "minimum balance is 1500";
//	}
//	firstBalance = b;
//}

double Employee::getSalary() {
	return salary;
}

void Employee::displayInfo() {
	Person::displayInfo();
	cout << "salary : " << salary<<endl;
}
void Employee::addClient() {
	int id;
	string name, pass;
	double balance;
	Client c;
	cout << "enter Client Info" << endl;
	cout << "enter name : ";
	for (int i = 0; i < 3; i++) {
		getline(cin, name);
		if (Employee::enterName(name) == "you enter invalid name ")
			cout << "invalid name enter again : ";
		else {
			c.setName(name);
			break;
		}
		if (i == 2) {
			cout << "you enter wrong name for 3 times" << endl;
			exit(0);
		}
	}
	cout << "enter password : ";
	for (int i = 0; i < 3; i++) {
	getline(cin, pass);
	if (enterPassword(pass) == "invalid password")
		cout << "enter password again : ";
	else {
		c.setPassword(pass);
		break;
	}
	}
	cout << "enter Id : ";
	cin >> id;
	c.setId(id);
	cout << "enter balance : ";
	cin >> balance;
	c.setBalance(balance);
	FileManager::ClientFile(c);
}
string Employee::enterName(string name) {
	
		if (Validation::validateName(name) == true) {
			return name;
		}
	
		else {
			return "you enter invalid name ";
		}	
}

string Employee::enterPassword(string pass) {
	if (Validation::validatePassword(pass) == true)
		return pass;
	else
		return "invalid password";
}
