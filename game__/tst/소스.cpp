	else if (i == 'E' || i == 'e')
	{
		printf("��ȭ�� �����Ϸ��� ��ȭ���� %d�� �Ҹ�˴ϴ�. ���⸦ ��ȭ�Ͻðڽ��ϱ�? Y/N \n", (a * 20));
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
				printf("��ȭ���� �����մϴ�.\n\n");
				Menu();
			}
		}
		else if (loyal == 'N' || loyal == 'n')
		{
			printf("��ȭ�� ����Ͽ����ϴ�.\n\n");
			Upgrade_M();
		}
		}

	else
		printf("Press Y/N\n");
	}