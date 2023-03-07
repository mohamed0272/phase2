#pragma once
#include<iostream>
#include"Employee.h"
#include"Admin.h"
#include"Client.h"
#include<vector>

class FileManager
{
public :
	static string getClientLine();
	static void ClientFile(Client& c);
	static string getEmployeeLine();
	static string getAdminLine();
	static vector<string>  getClients();

};

