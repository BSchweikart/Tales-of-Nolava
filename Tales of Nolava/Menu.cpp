#include "Menu.h"

Menu::Menu()
{
	choice = 0;
	Player player;
	activeCharacter = 0;
	filename = "player.txt";
}

Menu::~Menu()
{
}

#pragma region Start-Menu
void Menu::startMenu()
{
	cout << "   Tales of Nolava" << '\n';
	cout << "=======================" << '\n';
	cout << "- Welcome to the Alpha " << '\n';
	cout << "- Version 0.01 " << '\n';
	cout << "- Created By: " << '\n';
	cout << "- Kriina " << '\n';
	cout << "- Newer versions will be pushed out when complete  " << '\n';
	cout << "1: Create Player     2: Load Player       3: Exit" << "\n\n";

	cout << "> ";
	cin >> choice;
	cout << '\n';

	switch (choice)
	{
	case 1:
		cin.ignore();
		createPlayer();
		break;

	case 2:
		characterLoad();
		break;

	case 3:
		exit(1);
		break;

	default:
		cout << "Please make a valid selection" << "\n\n";
		startMenu();
	}
}
#pragma endregion

#pragma region Main-Menu
//Look into reformatting menu/ add in player basic info
void Menu::mainMenu()
{
	cout << "\n\n";
	cout << "MAIN MENU" << '\n';
	cout << "===============" << '\n';
	cout << "| 0: Quit      |" << '\n';
	cout << "| 1: Travel    |" << '\n';
	cout << "| 2: Shop      |" << '\n';
	cout << "| 3: Level UP  |" << '\n';
	cout << "| 4: Rest      |" << '\n';
	cout << "| 5: Stats     |" << '\n';
	cout << "| 6: Save Game |" << '\n';
	cout << "| 7: Load Game |" << '\n';
	cout << "===============" << "\n\n";

	cout << "> ";
	cin >> choice;
	cout << '\n';

	switch (choice)
	{
	case 0:
		exit(1);
		break;
	case 5:
		statsScreen();
		break;

	case 6:
		characterSave();
		break;

	case 7:
		characterLoad();
		break;

	default:
		cout << "Please make a valid selection" << '\n';
		break;
	}
}
#pragma endregion

#pragma region Player-Create
void Menu::createPlayer()
{
	characterCreate();
}
#pragma endregion

#pragma region Player-Stats
void Menu::statsScreen() const
{
	cout << "      Player Stats" << '\n';
	cout << std::setw(30) << std::setfill('=') << '\n';
	cout << "| Name: " << player[activeCharacter].getName() << '\n';
	cout << "| Level: " << player[activeCharacter].getLevel() << '\n';
	cout << "| Hp: " << player[activeCharacter].getHP() << " / " << player[activeCharacter].getHPMax() << '\n';
	cout << "| Experience: " << player[activeCharacter].getExp() << "/" << player[activeCharacter].getExpNext() << '\n';
	cout << std::setw(30) << std::setfill('=') << '\n';
	cout << "| Strength: " << player[activeCharacter].getStrength() << '\n';
	cout << "| Dexterity: " << player[activeCharacter].getDexterity() << '\n';
	cout << "| Intelligence: " << player[activeCharacter].getIntelligence() << '\n';
	cout << "| Vitality: " << player[activeCharacter].getVitality() << '\n';
	cout << "| Defense: " << player[activeCharacter].getDefence() << '\n';
	cout << std::setw(30) << std::setfill('=') << '\n';
	cout << "| Min/Max Damage: " << player[activeCharacter].getDamageMin() << " / " << player[activeCharacter].getDamageMax() << '\n';
	cout << std::setw(30) << std::setfill('=') << "\n\n";
}
#pragma endregion

#pragma region characterCreate
void Menu::characterCreate()
{
	string name = "";
	cout << "What is your name hero?: ";
	getline(cin, name);

	player.push_back(Player());
	activeCharacter = player.size() - 1;
	player[activeCharacter].initialize(name);
}
#pragma endregion

#pragma region characterSave
void Menu::characterSave()
{
	ofstream outfile(filename);

	if (outfile.is_open())
	{
		for (size_t i = 0; i < player.size(); i++)
		{
			outfile << player[i].getAsString() << '\n';
		}
	}

	outfile.close();
}
#pragma endregion

#pragma region characterLoad
void Menu::characterLoad()
{
	ifstream inFile(filename);

	this->player.clear();

	//Player information
	string name = "";
	int level = 0;
	int exp = 0;
	int expNext = 0;

	//Player Stats
	int strength = 0;
	int dexterity = 0;
	int intelligence = 0;
	int vitality = 0;

	//Player Stats cont..
	int hpCurrent = 0;
	int hpMax = 0;
	int damageMin = 0;
	int damageMax = 0;
	int defense = 0;

	string line = "";
}
#pragma endregion

#pragma region charaterSelection

#pragma endregion