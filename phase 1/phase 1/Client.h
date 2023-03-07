#pragma once
#include "Person.h"
#include<iostream>
#include "Validation.h"
#include<string>
#include<fstream>
class Client : public Person{
	double balance;
	string balancestr;
	
public:
	Client();
	Client(string name, string password, int id, double balance) :Person(name, password, id) {
		this->balance = balance;
	}
	void setBalance(double b);
	void setBalanceString(string b);
	double getBalance();
	string getBalanceString();

	void deposite(double amount);
	void withdraw(double amount);
	void transferTo(double amount, Client& reception);
	void checkBalance();
	void displayInfo();

};

