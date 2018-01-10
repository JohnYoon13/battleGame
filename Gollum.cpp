/************************************************************************
** Author: John Yoon
** Description:[Class Implement] - A class, Gollum
that comes from the parent class 'Creature'. It has the special ability
to suddenly increase its max attack potential to 3 dice with a 5% chance.
************************************************************************/

#include "Gollum.hpp"

#include <cstdlib>
Gollum::Gollum()
{
	category = "Gollum";
	strength = 8;
	armor = 3;
	A1 = Dice(6);
	A2 = Dice(6);
	A3 = Dice(6);
	D1 = Dice(6);
}


/*********************************************************************
** Function: attackRoll
** Description: Sets the variable 'chance' as a random number. Based on
that random number, 5% of the time, it will return the value of two
Dice rolls combined. Otherwise, it returns the value of one Dice roll.
** Parameters: None.
*********************************************************************/
int Gollum::attackRoll()
{
	int chance = rand() % 101;

	if(chance < 95)
	{
		return A1.roll();
	}

	else
	{	
		return Dice::rollThree(A1, A2, A3);
	}
}


/*********************************************************************
** Function: defenseRoll
** Description: Returns the value of a Dice roll.
** Parameters: None.
*********************************************************************/
int Gollum::defenseRoll()
{
	return D1.roll();
}