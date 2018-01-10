/************************************************************************
** Author: John Yoon
** Description:[Class Interface] - A class, Gollum
that comes from the parent class 'Creature'. It has the special ability
to suddenly increase its max attack potential to 3 dice with a 5% chance.
************************************************************************/

#ifndef GOLLUM_HPP
#define GOLLUM_HPP

#include "Creature.hpp"
#include "Dice.hpp"

class Gollum: public Creature
{
	public:
		Gollum();
		Dice A1;
		Dice A2;
		Dice A3;
		Dice D1;
		virtual int attackRoll();
		virtual int defenseRoll();
};
#endif