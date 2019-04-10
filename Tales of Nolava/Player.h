#pragma once
#include "Include.h"
#include"Room.h"

class Player
{
public:
	Player();
	virtual ~Player();

	//Functions
	void initialize(const string name);
	void levelUp();
	void updateStats();
	string getAsString() const;

	//Accessors
	inline const string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }

	inline const int& getStrength() const { return this->strength; }
	inline const int& getDexterity() const { return this->dexterity; }
	inline const int& getIntelligence() const { return this->intelligence; }
	inline const int& getVitality() const { return this->vitality; }

	inline const int& getHP() const { return this->hpCurrent; }
	inline const int& getHPMax() const { return this->hpMax; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefence() const { return this->defense; }

	//Modifier
	Room* location;

private:
	//Player information
	string name;
	int level;
	int exp;
	int expNext;

	//Player Stats
	int strength;
	int dexterity;
	int intelligence;
	int vitality;

	//Player Stats cont..
	int hpCurrent;
	int hpMax;
	int damageMin;
	int damageMax;
	int defense;

	//Used at a later time.
	int statPoints;

	//Player Location
	string description;
};