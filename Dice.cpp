/************************************************************************
** Author: John Yoon
** Description:[Class Implement] - A class, Dice that
has default six sides, and the option to change the side amount. It
also has a roll function that returns a random value, with respect to
the number of sides. It also has functions to roll two dice, and to 
roll three dice.
************************************************************************/
#include "Dice.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

Dice::Dice()
{
	sides = 6;
	srand(time(NULL));
}


Dice::Dice(int totalSides)
{
	sides = totalSides;
	srand(time(NULL));
}


/*********************************************************************
** Function: roll
** Description: A random number is divides by the total amount of 
sides on the dice. The remainder of the division is increased by 1, 
and that value is returned.
** Parameters: None.
*********************************************************************/
int Dice::roll()
{
	return (rand() % sides) + 1;
}


/*********************************************************************
** Function: rollTwo
** Description: Two Dice each calls its roll functions to get respective
random values. Then the values are combined and returned.
** Parameters: Two Dice by reference.
*********************************************************************/
int Dice::rollTwo(Dice &first, Dice &second)
{
	return first.roll() + second.roll();
}


/*********************************************************************
** Function: rollThree
** Description: Three Dice each calls its roll functions to get respective
random values. Then the values are combined and returned.
** Parameters: Three Dice by reference.
*********************************************************************/
int Dice::rollThree(Dice &first, Dice &second, Dice &third)
{
	return first.roll() + second.roll() + third.roll();
}