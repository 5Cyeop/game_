#include "border.h"
#include "travel.h"

void Setcursor(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int main()
{
	Border();
	int player_x = 10;
	int player_y = 16;
	setCursorVisible(false);
	while (1)
	{
		if (_kbhit())
		{
			Setcursor(player_x, player_y);
			printf("  ");

			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				player_y--;
				if (player_y <= 0)
				{
					player_y++;
				}

				else if (player_x >= 28 && player_x <= 44)
				{
					if (player_y >= 6 && player_y < 13)
						player_y++;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				player_y++;
				if (player_y >= 23)
				{
					player_y--;
				}

				else if (player_x >= 28 && player_x <= 44)
				{
					if (player_y >= 6 && player_y < 13)
						player_y--;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				player_x -= 2;
				if (player_x <= 0)
				{
					player_x += 2;
				}

				else if (player_y >= 6 && player_y < 13)
				{
					if (player_x >= 28 && player_x <= 44)
					{
						player_x += 2;
					}
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				player_x += 2;
				if (player_x >= 78)
				{
					if (player_y <= 15 || player_y >= 18)
					{
						player_x -= 2;
					}
				}

				if (player_y >= 6 && player_y < 13)
				{
					if (player_x >= 28 && player_x <= 44)
					{
						player_x -= 2;
					}
				}

				if (player_y >= 15 && player_y <= 18)
				{
					if (player_x > 82)
					{
						system("cls");
						Sleep(500);
						Fild();
						player_x = 10;
						player_y = 16;
					}
				}
			}
		}

		Setcursor(player_x, player_y);
		printf("бр");

		Sleep(50);


	}

}