/************************************************************************
** Author: John Yoon
** Description: [Class Implement] - A class, Harry Potter
that comes from the parent class 'Creature'. It has the special ability
where if it dies, then it comes back with 10 strength (only once though).
************************************************************************/

#include "HarryPotter.hpp"


HarryPotter::HarryPotter()
{
	category = "Harry Potter";
	strength = 10;
	armor = 0;
	already = false;
	A1 = Dice(6);
	A2 = Dice(6);
	D1 = Dice(6);
	D2 = Dice(6);
}


/*********************************************************************
** Function: attackRoll
** Description: Returns the value of two Dice rolls combined.
** Parameters: None.
*********************************************************************/
int HarryPotter::attackRoll()
{
	return Dice::rollTwo(A1, A2);
}


/*********************************************************************
** Function: defenseRoll
** Description: Returns the value of two Dice rolls combined.
** Parameters: None.
*********************************************************************/
int HarryPotter::defenseRoll()
{
	return Dice::rollTwo(D1, D2);
}