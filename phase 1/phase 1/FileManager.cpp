#include "FileManager.h"
#include<string>
#include"Parser.h"

void FileManager::ClientFile(Client& c) {
	string line;
	line = to_string(c.getId()) + " / " + c.getPassword() + " / " + c.getName() + " / " + to_string(c.getBalance());
	fstream client;
	client.open("client.txt", ios::app);
	client << line << endl;
	client.close();

}

//this method for getting line from client.txt file and return it
//to use it in method split in class parser
string FileManager::getClientLine() {
	string line;
	fstream client;
	client.open("client.txt", ios::in);
	getline(client, line);
	client.close();
	return line;
}

string FileManager::getEmployeeLine() {
	string line;
	fstream employee;
	employee.open("employee.txt", ios::in);
	getline(employee, line);
	employee.close();
	return line;
}

string FileManager::getAdminLine() {
	string line;
	fstream admin;
	admin.open("admin.txt", ios::in);
	getline(admin, line);
	admin.close();
	return line;
}

vector<string> FileManager::getClients() {
	fstream client;
	vector<string> c;
	client.open("client.txt", ios::in);
	string line = (getClientLine());
	while (getline(client, line)) {
		c.push_back(line);
	}
	client.close();
	return c;
}
