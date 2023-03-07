#include "Client.h"

Client::Client() {
	balance = 1500;
}


void Client::deposite(double amount) {
	balance += amount;
}

void Client::setBalance(double b) {
	if (Validation::validateBalance(b) == false) {
		cout << "minimum balance is 1500";
	}
	balance = b;
}

void Client::setBalanceString(string b) {
	if (b == to_string(balance))
		balancestr = b;
}

string Client::getBalanceString() {
	return balancestr;
}

double Client::getBalance() {
	return balance;
}


void Client::withdraw(double amount) {
	if (amount <= balance && amount > 0) {
		balance -= amount;
	}
}

void Client::transferTo(double amount, Client &reception) {
	
	if (amount <= balance && amount > 0) {
	}withdraw(amount);
	reception.balance += amount;
}

void Client::checkBalance() {
	cout << "Balance : " << balance << endl;
}

void Client::displayInfo() {
	Person::displayInfo();
	cout << "Balance : " <<balance << endl;
}


