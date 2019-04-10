#pragma once
#include"Include.h"
#include"Menu.h"

class Core
{
private:
	int choice;
	bool playing;

	//Menu
	Menu menu;

	//Player

	//Enemies

	//Rooms
	//vector <Room*> rooms;

public:
	Core();
	virtual ~Core();

	//Operators

	//Functions
	void startMenu();
	void initGame();
	void mainMenu();

	//Accessors
	inline bool getPlaying() const { return this->playing; }

	//Modifiers
};