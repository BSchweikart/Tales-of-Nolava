#pragma once
#include "Include.h"
#include"Player.h"

class Menu
{
private:
	int choice;

	//Player
	int activeCharacter;
	vector<Player> player;
	string filename;

	//NPC

public:
	Menu();

	virtual ~Menu();

	//Operators

	//Functions
	void startMenu();
	void createPlayer();
	void mainMenu();
	void statsScreen() const;
	void characterSave();
	void characterLoad();
	void characterCreate();

	//Accessors

	//Modifiers
};
