/************************************************************************
** Author: John Yoon
** Description: [Class Interface] - A class, Reptile People
that comes from the parent class 'Creature'. It has no special abilities.
************************************************************************/

#ifndef REPTILE_HPP
#define REPTILE_HPP

#include "Creature.hpp"
#include "Dice.hpp"

class ReptilePeople: public Creature
{
	public:
		ReptilePeople();
		Dice A1;
		Dice A2;
		Dice A3;
		Dice D1;
		virtual int attackRoll();
		virtual int defenseRoll();
};
#endif