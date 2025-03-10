#include "travel.h"
void Setcursor(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int main()
{
	int monster_x = PosX();
	int monster_y = PosY();

	Fild();

	while (1)
	{
		SetCursor(monster_x, monster_y);
		printf("M");
	}
}