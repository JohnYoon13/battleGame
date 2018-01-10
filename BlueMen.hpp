/************************************************************************
** Author: John Yoon
** Description:[Class Interface] - A class, BlueMen
that comes from the parent class 'Creature'. It has the special condition
where they lose a defense die for every 4 damage points.
************************************************************************/

#ifndef BLUE_HPP
#define BLUE_HPP

#include "Creature.hpp"
#include "Dice.hpp"

class BlueMen: public Creature
{
	public:
		BlueMen();
		Dice A1;
		Dice A2;
		Dice D1;
		Dice D2;
		Dice D3;
		virtual int attackRoll();
		virtual int defenseRoll();
};
#endif