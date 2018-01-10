/************************************************************************
** Author: John Yoon
** Description: [Class Implement] - A class, Reptile People
that comes from the parent class 'Creature'. It has no special abilities.
************************************************************************/

#include "ReptilePeople.hpp"

ReptilePeople::ReptilePeople()
{
	category = "Reptile People";
	strength = 18;
	armor = 7;
	A1 = Dice(6);
	A2 = Dice(6);
	A3 = Dice(6);
	D1 = Dice(6);
}


/*********************************************************************
** Function: attackRoll
** Description: Returns the value of three Dice rolls combined.
** Parameters: None.
*********************************************************************/
int ReptilePeople::attackRoll()
{
	return Dice::rollThree(A1, A2, A3);
}


/*********************************************************************
** Function: defenseRoll
** Description: Returns the value of a Dice roll.
** Parameters: None.
*********************************************************************/
int ReptilePeople::defenseRoll()
{
	return D1.roll();
}