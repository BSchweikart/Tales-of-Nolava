#pragma once
#include"Include.h"

class Room
{
public:
	Room();
	Room(string, string);
	virtual ~Room();

	//Operators

	//Functions
	string printInfo();

	//Accessors

	//Modifiers

	string name;
	string description;

	// exits
	Room* north;
	Room* south;
	Room* east;
	Room* west;
};
