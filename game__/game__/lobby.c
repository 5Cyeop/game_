#include "lobby.h"
#include "battle.h"
#include "w_upgrade.h"

void Menu()
{
	printf("Select the contents [Battle (press B) / Weapon Upgrade (press U) / Game over (press O)]\n\n");
	char sel = _getch();

	if (sel == 'B' || sel == 'b')
	{
		M_Battle();
	}

	else if (sel == 'U' || sel == 'u')
	{
		Upgrade_M();
	}

	else if (sel == 'O' || sel == 'o')
	{
		exit(0);
	}

	else
	{
		printf("Press one of button (B / U / O)\n\n");
		Menu();
	}

}