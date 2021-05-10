

#include <iostream>
#include "npc.h"
#include "John.h"
#include "Ollie.h"
using namespace std;

int main()
{
	npc jerald;

	jerald.setHealth(100);
	jerald.setArmour(60);
	jerald.setSpeed(75);

	cout << "Jerald The great has " << jerald.getHealth() << " Health with "
								    << jerald.getArmour() << " Armour and can run at "
									<< jerald.getSpeed() << " mph. \n\n";
	John John;
	cout << "John has " << John.getHealth() << " Health with "
						<< John.getArmour() << " Armour and can run at "
						<< John.getSpeed() << " mph. \n\n";
	Ollie Ollie;
	cout << "Ollie has " << Ollie.getHealth() << " Health with "
						 << Ollie.getArmour() << " Armour and can run at "
						 << Ollie.getSpeed() << " mph. \n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
