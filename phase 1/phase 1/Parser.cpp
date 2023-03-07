#include "Parser.h"

vector<string> Parser::split(string line) {
	stringstream pars(line);
	string part;
	vector<string> info;
	while (getline(pars, part, ';')){
		info.push_back(part);
	}
	return info;
}

//this method return first line in Client.txt file and store it 
// in object from Client class and return Client object 
Client Parser::parseToClient() {
	Client c;
	string line = FileManager::getClientLine();
	c.setIdString(split(line)[0]);
	c.setPassword(split(line)[1]);
	c.setName(split(line)[2]);
	c.setBalanceString(split(line)[3]);
	return c;
 }

Employee Parser::parseToEmployee() {
	Employee e;
	string line = FileManager::getEmployeeLine();
	e.setIdString(split(line)[0]);
	e.setPassword(split(line)[1]);
	e.setName(split(line)[2]);
	e.setSalaryString(split(line)[3]);
	return e;
}
Admin Parser::parseToAdmin() {
	Admin a;
	string line = FileManager::getAdminLine();
	a.setIdString(split(line)[0]);
	a.setPassword(split(line)[1]);
	a.setName(split(line)[2]);
	a.setSalaryString(split(line)[3]);
	return a;

}
