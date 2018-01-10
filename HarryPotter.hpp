/************************************************************************
** Author: John Yoon
** Description: [Class Interface] - A class, Harry Potter
that comes from the parent class 'Creature'. It has the special ability
where if it dies, then it comes back with 10 strength (only once though).
************************************************************************/

#ifndef HARRY_HPP
#define HARRY_HPP

#include "Creature.hpp"
#include "Dice.hpp"

class HarryPotter: public Creature
{
	public:
		HarryPotter();
		Dice A1;
		Dice A2;
		Dice D1;
		Dice D2;
		virtual int attackRoll();
		virtual int defenseRoll();
};
#endif