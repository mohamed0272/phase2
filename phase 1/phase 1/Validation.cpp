#include "Validation.h"

 bool Validation::validateName(string name) {
	if (name.size() <= 5 || name.size() >= 20)
		return false;
	for (int i = 0; i < name.size();i++) {
		if (!(name[i] >= 'A' && name[i] <= 'z') && name[i]!=' ')
			return false;
	}
	return true;
	
}

 bool Validation::validatePassword(string password) {
	if (password.size() <= 8 || password.size() >= 20)
		return false;
	return true;
}

 bool Validation:: validateBalance(double balance) {
	if (balance < 1500)
		return false;
	return true;
}
 bool  Validation:: validateSalary(double salary) {
	if (salary < 5000)
		return false;
	return true;
}
