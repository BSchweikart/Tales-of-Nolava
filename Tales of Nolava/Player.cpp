#include "Player.h"

Player::Player()
{
	//Player information
	this->name = "";
	this->level = 1;
	this->exp = 0;
	this->expNext = 0;

	//Player Stats
	this->strength = 0;
	this->dexterity = 0;
	this->intelligence = 0;
	this->vitality = 0;

	//Player Stats cont..
	this->hpCurrent = 0;
	this->hpMax = 0;
	this->damageMin = 0;
	this->damageMax = 0;
	this->defense = 0;

	//Player Location
	description = "Nothing Special";
	location = 0;
}

Player::~Player()
{
}

void Player::initialize(const std::string name)
{
	//Player information
	this->name = name;
	this->level = 1;
	this->exp = 0;

	//Player Stats
	this->strength = 5;
	this->dexterity = 5;
	this->intelligence = 5;
	this->vitality = 5;

	//Player Stats cont..
	this->hpCurrent = 10;
	this->hpMax = 10;
	this->damageMin = 2;
	this->damageMax = 4;
	this->defense = 1;

	this->updateStats();
}

void Player::levelUp()
{
	while (exp >= expNext)
	{
		if (this->exp >= this->expNext)
		{
			this->exp -= this->expNext;
			level++;
			this->exp = 0;
			this->expNext = static_cast<int>((50 / 3)*((pow(level, 3)
				- 6 * pow(level, 2))
				+ 17 * level - 12)) + 100;

			this->statPoints++;

			this->updateStats();

			cout << "Congratulations you are now level: " << this->level << "!" << "\n\n";
		}
		else
		{
			cout << "Not enough exp" << "\n\n";
		}
	}
}

void Player::updateStats()
{
	this->expNext = static_cast<int>(
		(50 / 3)*((pow(level, 3)
			- 6 * pow(level, 2))
			+ 17 * level - 12)) + 100;

	this->hpMax = (this->vitality * 5) + (this->strength) + this->level * 5;
	this->damageMin = this->strength;
	this->damageMax = this->strength + 2;
	this->defense = this->dexterity + (this->intelligence / 2);
	this->hpCurrent = this->hpMax;
}

string Player::getAsString() const
{
	return name + " "
		+ to_string(level) + " "
		+ to_string(exp) + " "
		+ to_string(strength) + " "
		+ to_string(vitality) + " "
		+ to_string(dexterity) + " "
		+ to_string(intelligence) + " "
		+ to_string(hpCurrent) + " "
		+ to_string(statPoints) + " ";
}