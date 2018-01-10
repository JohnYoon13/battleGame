/************************************************************************
** Author: John Yoon
** Description: [Class Implement] - A class, Medusa
that comes from the parent class 'Creature'. It has the special ability
to instantly defeat its opponent if it rolls a 12.
************************************************************************/

#include "Medusa.hpp"

Medusa::Medusa()
{
	category = "Medusa";
	strength = 8;
	armor = 3;
	A1 = Dice(6);
	A2 = Dice(6);
	D1 = Dice(6);
}


/*********************************************************************
** Function: attack
** Description: Using the creature's respective dice attack ability,
gets a value to use as its attack power. Prints out how much power
the creature attacked the enemy with. Then updates the enemy's health
based on that attack power. However, if the dice roll value is 12, 
then the enemy's strength is updated to 0.
** Parameters: Creature pointer.
*********************************************************************/
void Medusa::attack(Creature *enemy)
{
	int power = attackRoll();
	cout << this->category << " attacks " << enemy->getCategory();
	cout << " with " << power << " power." << endl;

	if(power == 12)
	{
		cout << this->category << " has turned her enemy to stone. ";
		cout << "She automatically wins!" << endl;
		enemy->updateHealth(999);
	}

	else
	{
		enemy->updateHealth(power);
	}
}

/*********************************************************************
** Function: attackRoll
** Description: Returns the value of two Dice rolls combined.
** Parameters: None.
*********************************************************************/
int Medusa::attackRoll()
{
	return Dice::rollTwo(A1, A2);
}


/*********************************************************************
** Function: defenseRoll
** Description: Returns the value of a Dice roll.
** Parameters: None.
*********************************************************************/
int Medusa::defenseRoll()
{
	return D1.roll();
}