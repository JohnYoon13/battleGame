/************************************************************************
** Author: John Yoon
** Description:[Class Interface] - A class, Creature
that is the parent class for five unique creature derived classes: Medusa,
Gollum, Reptile People, Blue Men, and Harry Potter.
************************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Creature
{
	protected:
		string category;
		int armor;
		int strength;
		bool already;
		virtual int attackRoll() = 0;
		virtual int defenseRoll() = 0;

	public:
		string getCategory();
		void setArmor(int);
		int getArmor();
		void setStrength(int);
		int getStrength();
		virtual ~Creature() {};
		virtual void attack(Creature *enemy);
		virtual int defense();
		virtual void updateHealth(int);
		bool death();
};
#endif