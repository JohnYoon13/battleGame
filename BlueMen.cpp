/************************************************************************
** Author: John Yoon
** Description: [Class Implement] - A class, BlueMen
that comes from the parent class 'Creature'. It has the special condition
where they lose a defense die for every 4 damage points.
************************************************************************/

#include "BlueMen.hpp"

BlueMen::BlueMen()
{
	category = "Blue Men";
	strength = 12;
	armor = 3;
	A1 = Dice(10);
	A2 = Dice(10);
	D1 = Dice(6);
	D2 = Dice(6);
	D3 = Dice(6);
}


/*********************************************************************
** Function: attackRoll
** Description: Returns the value of two Dice rolls combined.
** Parameters: None.
*********************************************************************/
int BlueMen::attackRoll()
{
	return Dice::rollTwo(A1, A2);
}


/*********************************************************************
** Function: defenseRoll
** Description: If strength is less than or equal to 4, then only one
Dice is rolled and that value is returned. If strength is between 4 and
8, then two Dice are rolled and the combined values are returned. If
strength is greater than 8, then three Dice are rolled, and the combined
values are returned.
** Parameters: None.
*********************************************************************/
int BlueMen::defenseRoll()
{
	if(this->strength <= 4)
	{
		return D1.roll();
	}

	if((this->strength > 4) && (this->strength <= 8))
	{
		return Dice::rollTwo(D1, D2);
	}

	else
	{
		return Dice::rollThree(D1, D2, D3);
	}	
}