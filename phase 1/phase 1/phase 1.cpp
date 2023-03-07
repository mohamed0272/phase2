#include "Person.h"
#include "Client.h"
#include "Validation.h"
#include<iostream>
#include<fstream>
#include<string>
#include "FileManager.h"
#include"Parser.h"
int main() {
	
	
	//Employee::addClient();
	//cout << FileManager::getClientLine();
	for (auto &i : FileManager::getClients()) {
		cout << i << endl;
	}
	/*cout << FileManager::getClients()[0] << endl;
 cout<<FileManager::getClients()[1] <<endl;*/
	//Parser::parseToClient().displayInfo();
 //cout<<Parser::parseToClient().getIdString();
	//cout<<Parser::split(FileMaker::getclientLine())[0];
	

}