#pragma once 
#include<vector>
#include<sstream>
#include<iostream>
#include<string>
#include"Client.h"
#include<fstream>
#include "FileManager.h"
using namespace std;
class Parser
{
public:
	static vector<string> split(string line);

	static Client parseToClient();
	static Employee parseToEmployee();
	static Admin parseToAdmin();
};

