#include "upgrade_shop.h"
#include "w_upgrade.h"
#include "border.h"

void Shop()
{
	printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
	printf("¡á                                                                            ¡á\n");
	printf("¡á                            [PRESS THE BUTTON]                              ¡á\n");
	printf("¡á                                                                            ¡á\n");
	printf("¡á                            [U] Upgrade Weapon                              ¡á\n");
	printf("¡á                                                                            ¡á\n");
	printf("¡á                            [Q] Quit Upgrade                                ¡á\n");
	printf("¡á                                                                            ¡á\n");
	printf("¡á                            [E] Evolve Weapon                               ¡á\n");
	printf("¡á                                                                            ¡á\n");
	printf("¡á                                                                            ¡á\n");
	printf("¡á                                                                            ¡á\n");
	printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
}

void Select()
{
	char cho = _getch();
	
	if (cho == 'U' || cho == 'u')
	{
		Upgrade_M();
	}

	else if (cho == 'Q' || cho == 'q')
	{
		system("cls");
		Border();
	}

}
