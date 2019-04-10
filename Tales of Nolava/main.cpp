#include"Core.h"

int main()
{
	Core core;

	core.startMenu();

	while (core.getPlaying())
	{
		core.mainMenu();
	}
	return 0;
}