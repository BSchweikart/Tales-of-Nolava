#include "Room.h"

Room::Room()
{
	// default constructor -- be sure
	// to set name and description later
	// if you use this
	name = "Room";
	description = "A featureless room.";

	// null pointer (zero) exits don't lead anywhere
	north = 0;
	south = 0;
	east = 0;
	west = 0;
}

Room::~Room()
{
}

Room::Room(string name, string description) {
	// note that this->foo and foo are different.
	// one is a member variable of this object
	// and the other is a local variable.

	this->name = name;
	this->description = description;

	north = 0;
	south = 0;
	east = 0;
	west = 0;
}

string Room::printInfo() {
	// a pretty-printed string listing of name and description.
	// will later include things like exits and items present.

	// note the next few lines are all one line of code
	// that doesn't end until the semicolon
	string endl = "\n";

	string output = name + endl
		+ description + endl;
	// TODO: print non-null exits

	return output;
}