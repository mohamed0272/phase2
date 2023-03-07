#include "Person.h"


Person::Person() {
	id = 0;
}
Person::Person(string name, string password, int id) {
	setName(name);
	setPassword(password);
	setId(id);
}
void Person::setName(string name) {
	
		try {
			if (Validation::validateName(name) == false)
				throw("invalid name");
			else 
				this->name = name;
	
		}
		catch (const char* message) {
			cout << message << endl;
		}		
}

void Person::setPassword(string password) {
	
	try{
		if (Validation::validatePassword(password) == false)
			throw("invalid password");
		else
			this->password = password;
	}
	catch (const char* message) {
		cout << message << endl;
	}
		
}



void Person::setId(int id) {
	/*if (idstr == to_string(id))
		id = stoi(idstr);
	else*/
		this->id = id;
}

void Person::setIdString(string s) {
	
		idstr = s;

}
int Person::getId() {
	return id;
}
string Person::getIdString() {
	return idstr;
}
string Person::getName() {
	return name;
 }

string Person::getPassword() {
	return password;
}
void Person::displayInfo() {
	cout << "name : " << getName() << endl;
	cout << "ID : " << getIdString() << endl;
	cout << "password : " << getPassword() << endl;
}


