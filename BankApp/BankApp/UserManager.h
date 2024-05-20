#pragma once
#include "UserModel.h"
#include <unordered_map>

class UserManager
{
public:
	UserModel getUser(int id);
	void addUser(UserModel newUser);
private:
	std::unordered_map<int, UserModel> allUser;
};

