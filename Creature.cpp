/************************************************************************
** Author: John Yoon
** Description:[Class Implement] - A class, Creature
that is the parent class for five unique creature derived classes: Medusa,
Gollum, Reptile People, Blue Men, and Harry Potter.
************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"


/*********************************************************************
** Function: getCategory
** Description: Returns category.
** Parameters: None.
*********************************************************************/
string Creature::getCategory()
{
	return category;
}


/*********************************************************************
** Function: setArmor
** Description: Sets armor.
** Parameters: An integer.
*********************************************************************/
void Creature::setArmor(int armor)
{
	this->armor = armor;
}


/*********************************************************************
** Function: getArmor
** Description: Returns armor.
** Parameters: None.
*********************************************************************/
int Creature::getArmor()
{
	return armor;
}


/*********************************************************************
** Function: setStrength
** Description: Sets strength.
** Parameters: An integer.
*********************************************************************/
void Creature::setStrength(int strength)
{
	this->strength = strength;
}


/*********************************************************************
** Function: getStrength
** Description: Returns strength.
** Parameters: None.
*********************************************************************/
int Creature::getStrength()
{
	return strength;
}


/*********************************************************************
** Function: attack
** Description: Using the creature's respective dice attack ability,
gets a value to use as its attack power. Prints out how much power
the creature attacked the enemy with. Then updates the enemy's health
based on that attack power.
** Parameters: Creature pointer.
*********************************************************************/
void Creature::attack(Creature *enemy)
{
	int power = attackRoll();
	cout << this->category << " attacks " << enemy->getCategory();
	cout << " with " << power << " power." << endl;
	enemy->updateHealth(power);
}


/*********************************************************************
** Function: defense
** Description: Using the creature's respective dice defense ability,
returns a value to use as its defensive ability.
** Parameters: None.
*********************************************************************/
int Creature::defense()
{
	return defenseRoll();
}


/*********************************************************************
** Function: updateHealth
** Description: Updates a Creature's strength based on an opponent's
attack power, in addition to the Creature's defense and armor. Prints
out the aforementioned information. Includes special conditions for when 
Medusa rolls a 12, or when Harry Potter dies.
** Parameters: An integer.
*********************************************************************/
void Creature::updateHealth(int hit)
{
	
	if(hit == 999)
	{
		strength = 0;
	}


	else
	{	
		int block = defense();
		int pain = hit - armor - block;

		if(pain < 0)
		{
			pain = 0;
		}

		int updatedStrength = strength - pain;
		strength = updatedStrength;

		cout << this->category << " uses " << block << " defense";
		cout << ", and " << armor << " armor." << endl;

		cout << this->category << " takes " << pain << " damage." << endl;

		if((this->category == "Harry Potter") && (this->getStrength() <= 0) && (!already)) 
		{
			already = true;
			cout << "Harry Potter appears dead, BUT comes back to life!" << endl;
			strength = 10;
		}
	}
	
}


/*********************************************************************
** Function: death
** Description: Returns true or false based on if the Creature's 
strength is greater than 0.
** Parameters: None.
*********************************************************************/
bool Creature::death()
{
	bool KO = this->strength <= 0;
	return KO;
}