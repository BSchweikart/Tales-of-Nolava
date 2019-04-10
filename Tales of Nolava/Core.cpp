#include "Core.h"

Core::Core()
{
	choice = 0;
	playing = true;
	Menu menu;
}

Core::~Core()
{
}

void Core::startMenu()
{
	menu.startMenu();
}

void Core::mainMenu()
{
	menu.mainMenu();
}