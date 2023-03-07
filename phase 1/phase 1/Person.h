#pragma once
#include<iostream>
#include "Validation.h"
#include<string>
using namespace std;
class Person
{
	int id;
	string name, password,idstr;
public:
	Person();
	Person(string name, string password, int id);
	void setName(string name);
	void setPassword(string password);
	void setId(int id);
	void setIdString(string s);
	int getId();
	string getIdString();
	string getName();
	string getPassword();
	void displayInfo();
};

