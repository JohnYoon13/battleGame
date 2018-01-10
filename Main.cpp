/************************************************************************
** Author: John Yoon
** Description: Main function that tests all the fantasy
creature classes by battling them against one another. The user inputs
a numerical value from 1 through 25 to choose a fight. Also includes the
battle function that handles the fight and how the fight results will be
formatted.
************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"
#include "ReptilePeople.hpp"
#include "Medusa.hpp"
#include "Gollum.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"

//battle function forward declaration.
void battle(Creature *first, Creature *second);


/*********************************************************************
** Function: main
** Description: Displays the full menu of possible battles between
the fantasy creatures. The user selects one and the fight results are
displayed.
** Parameters: None.
*********************************************************************/
int main()
{
	int input;

	cout << "ENTER 1 to see REPTILE PEOPLE VS REPTILE PEOPLE." << endl;
	cout << "ENTER 2 to see REPTILE PEOPLE VS MEDUSA."<< endl;
	cout << "ENTER 3 to see REPTILE PEOPLE VS GOLLUM." << endl;
	cout << "ENTER 4 to see REPTILE PEOPLE VS BLUE MEN." << endl;
	cout << "ENTER 5 to see REPTILE PEOPLE VS HARRY POTTER." << endl;

	cout << "ENTER 6 to see MEDUSA VS REPTILE PEOPLE." << endl;
	cout << "ENTER 7 to see MEDUSA VS MEDUSA." << endl;
	cout << "ENTER 8 to see MEDUSA VS GOLLUM." << endl;
	cout << "ENTER 9 to see MEDUSA VS BLUE MEN." << endl;
	cout << "ENTER 10 to see MEDUSA VS HARRY POTTER." << endl;

	cout << "ENTER 11 to see GOLLUM VS REPTILE PEOPLE." << endl;
	cout << "ENTER 12 to see GOLLUM VS MEDUSA."<< endl;
	cout << "ENTER 13 to see GOLLUM VS GOLLUM." << endl;
	cout << "ENTER 14 to see GOLLUM VS BLUE MEN." << endl;
	cout << "ENTER 15 to see GOLLUM VS HARRY POTTER." << endl;

	cout << "ENTER 16 to see BLUE MEN VS REPTILE PEOPLE." << endl;
	cout << "ENTER 17 to see BLUE MEN VS MEDUSA." << endl;
	cout << "ENTER 18 to see BLUE MEN VS GOLLUM." << endl;
	cout << "ENTER 19 to see BLUE MEN VS BLUE MEN." << endl;
	cout << "ENTER 20 to see BLUE MEN VS HARRY POTTER." << endl;

	cout << "ENTER 21 to see HARRY POTTER VS REPTILE PEOPLE." << endl;
	cout << "ENTER 22 to see HARRY POTTER VS MEDUSA."<< endl;
	cout << "ENTER 23 to see HARRY POTTER VS GOLLUM." << endl;
	cout << "ENTER 24 to see HARRY POTTER VS BLUE MEN." << endl;
	cout << "ENTER 25 to see HARRY POTTER VS HARRY POTTER." << endl;
		
	while((!(cin >> input)) || (input <= 0) || (input > 25))
	{
		cout << "Invalid input. Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	switch(input)
	{
		case 1:
			battle(new ReptilePeople, new ReptilePeople);
			break;

		case 2:
			battle(new ReptilePeople, new Medusa);
			break;

		case 3:
			battle(new ReptilePeople, new Gollum);
			break;

		case 4:
			battle(new ReptilePeople, new BlueMen);
			break;

		case 5:
			battle(new ReptilePeople, new HarryPotter);
			break;

		case 6:
			battle(new Medusa, new ReptilePeople);
			break;

		case 7:
			battle(new Medusa, new Medusa);
			break;

		case 8:
			battle(new Medusa, new Gollum);
			break;

		case 9:
			battle(new Medusa, new BlueMen);
			break;

		case 10:
			battle(new Medusa, new HarryPotter);
			break;

		case 11:
			battle(new Gollum, new ReptilePeople);
			break;

		case 12:
			battle(new Gollum, new Medusa);
			break;

		case 13:
			battle(new Gollum, new Gollum);
			break;

		case 14:
			battle(new Gollum, new BlueMen);
			break;

		case 15:
			battle(new Gollum, new HarryPotter);
			break;

		case 16:
			battle(new BlueMen, new ReptilePeople);
			break;

		case 17:
			battle(new BlueMen, new Medusa);
			break;

		case 18:
			battle(new BlueMen, new Gollum);
			break;

		case 19:
			battle(new BlueMen, new BlueMen);
			break;

		case 20:
			battle(new BlueMen, new HarryPotter);
			break;

		case 21:
			battle(new HarryPotter, new ReptilePeople);
			break;

		case 22:
			battle(new HarryPotter, new Medusa);
			break;

		case 23:
			battle(new HarryPotter, new Gollum);
			break;

		case 24:
			battle(new HarryPotter, new BlueMen);
			break;

		case 25:
			battle(new HarryPotter, new HarryPotter);
			break;
	}
	return 0;
}



/*********************************************************************
** Function: battle
** Description: Two classes derived from the parent 'Creature' class
fight each other as long as both of them are alive. The fight ends
when any one dies. Each round is formatted and displayed.
** Parameters: Two Creature pointers
*********************************************************************/
void battle(Creature *first, Creature *second)
{
	cout << "\n\nBATTLE BETWEEN:" << endl;
	cout << first->getCategory() << " vs " << second->getCategory() << endl;
	cout << "====================================" << endl;
	bool end = false;

	while(!end)
	{
		if(!(first->death()))
		{
			first->attack(second);
		}
		
		if(!(second->death()))
		{
			second->attack(first);
		}

		cout << "\nROUND UPDATE: " << endl;
		cout << first->getCategory() << " strength is " << first->getStrength() << endl;
		cout << second->getCategory() << " strength is " << second->getStrength() << endl;
		cout << "-------------------------------------------------" << endl;

		if(first->death())
		{
			cout << first->getCategory() << " DIED" << endl;
			end = true;
		}

		if(second->death())
		{
			cout << second->getCategory() << " DIED" << endl;
			end = true;
		}
	}
	delete first;
	delete second;
	cout << "====================================\n" << endl;
}