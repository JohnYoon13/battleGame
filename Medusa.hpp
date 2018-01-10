/************************************************************************
** Author: John Yoon
** Description: [Class Interface] - A class, Medusa
that comes from the parent class 'Creature'. It has the special ability
to instantly defeat its opponent if it rolls a 12.
************************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Creature.hpp"
#include "Dice.hpp"

class Medusa: public Creature
{
	public:
		Medusa();
		Dice A1;
		Dice A2;
		Dice D1;
		virtual void attack(Creature *enemy);
		virtual int attackRoll();
		virtual int defenseRoll();
};
#endif