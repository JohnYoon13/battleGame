/************************************************************************
** Author: John Yoon
** Description:[Class Interface] - A class, Dice that
has default six sides, and the option to change the side amount. It
also has a roll function that returns a random value, with respect to
the number of sides. It also has functions to roll two dice, and to 
roll three dice.
************************************************************************/

#ifndef DICE_HPP
#define DICE_HPP

class Dice
{
	private:
		int sides;

	public:
		Dice();
		Dice(int);
		int roll();
		static int rollTwo(Dice &first, Dice &second);
		static int rollThree(Dice &first, Dice &second, Dice &third);
};
#endif