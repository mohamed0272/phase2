#pragma once
#include "Person.h"
#include "Client.h"
#include "Validation.h"
#include<iostream>
#include<fstream>
#include<string>

class Employee : public Person
{
	double salary;
	double firstBalance;
	string salarystr;
public:
	Employee();
	Employee(string name, string password, int id, double salary) :Person(name, password, id) {
		firstBalance = 0;
		this->salary = salary;
	}

	void setSalary(double salary);
	void setSalaryString(string salary);
	double getFirstBalance();
	//void setBalance(double b);
	double getSalary();
	void displayInfo();
	static void addClient();
	static string enterName(string name);
	static string enterPassword(string pass);


};

