	else if (i == 'E' || i == 'e')
	{
		printf("진화를 진행하려면 진화석이 %d개 소모됩니다. 무기를 진화하시겠습니까? Y/N \n", (a * 20));
		char loyal = _getch();
		if (loyal == 'Y' || loyal == 'y')
		{
			if (upgrade_point >= 200)
			{
				upgrade_point -= 200;
				Evolution();
			}

			else if (upgrade_point < 200)
			{
				printf("진화석이 부족합니다.\n\n");
				Menu();
			}
		}
		else if (loyal == 'N' || loyal == 'n')
		{
			printf("진화를 취소하였습니다.\n\n");
			Upgrade_M();
		}
		}

	else
		printf("Press Y/N\n");
	}