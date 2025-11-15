#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void pvc();
void pvp();
int main()
{
	char opt[3];
	while (1)
	{
		system("clear");
		printf("\nTikTekToe\n\nChose the game mode :-\n\n1. Single Player.\n2. Multi Player.\n\nEnter :- q -to quite the game.\n\nEnter (1/2/q) :- ");
		fgets(opt, 3, stdin);
		opt[1] = '\0';
		if (strcmp(opt, "1") == 0 || strcmp(opt, "2") == 0 || strcmp(opt, "q") == 0)
		{
			break;
		}
	}
	if (strcmp(opt, "1") == 0)
	{
		pvc();
	}
	else if (strcmp(opt, "2") == 0)
	{
		pvp();
	}
	else if (strcmp(opt, "q") == 0)
	{
		system("clear");
		printf("\nTikTekToe\n\nHope you have enojyed. Alvida\n");
	}
	return 0;
}
void pvc()
{
	system("clear");
	char opt[3], s = '\0',  p = '\0', c = '\0', v[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int i = 0, r = 0;
	srand(time(0));
	while (1)
	{
		system("clear");
		printf("\nTikTekToe\n\nChose symble for Player :-\n\n1. o\n2. x\n\nEnter :- m -to go to main manue.\nEnter :- q -to quite the game.\n\nEnter (1/2/m/q) :- ");
		fgets(opt, 3, stdin);
		opt[1] = '\0';
		if (strcmp(opt, "1") == 0 || strcmp(opt, "2") == 0 || strcmp(opt, "m") == 0 || strcmp(opt, "q") == 0)
		{
			break;
		}
	}
	if (strcmp(opt, "1") == 0)
	{
		p = 'o';
		c = 'x';
	}
	else if (strcmp(opt, "2") == 0)
	{
		p = 'x';
		c = 'o';
	}
	while ((p == 'o' || p == 'x') && (c == 'o' || c == 'x') && i < 10)
	{
		system("clear");
		printf("\nTikTekToe\n\nSymbol for Player is   :- %c\nSymbol for Computer is :- %c\n\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\nEnter :-   r   -to restart the game.\nEnter :-   m   -to go to main manue.\nEnter :-   q   -to quite the game.\nEnter :- (1-9) -to place your strick.\n", p, c, v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8]);
		if ((i == 0 || i%2 == 0) && i < 9)
		{
			printf("\nEnter the option for Player :- ");
			fgets(opt, 3, stdin);
			opt[1] = '\0';
			s = p;
		}
		else if ((i != 0 || i%2 != 0) && i < 9)
		{
			if (i == 1 && v[4] != p)
			{
				sprintf(opt, "%s", "5");
			}
			else if (i == 1 && v[4] == p)
			{
				r = rand()%4;
				if (r == 0)
				{
					sprintf(opt, "%s", "1");
				}
				else if (r == 1)
				{
					sprintf(opt, "%s", "3");
				}
				else if (r == 2)
				{
					sprintf(opt, "%s", "7");
				}
				else if (r == 3)
				{
					sprintf(opt, "%s", "9");
				}
			}
			else
			{
				if (v[0] == c && v[1] == c && v[2] == ' ')
				{
					sprintf(opt, "%s", "3");
				}
				else if (v[1] == c && v[2] == c && v[0] == ' ')
				{
					sprintf(opt, "%s", "1");
				}
				else if (v[2] == c && v[0] == c && v[1] == ' ')
				{
					sprintf(opt, "%s", "2");
				}
				else if (v[3] == c && v[4] == c && v[5] == ' ')
				{
					sprintf(opt, "%s", "6");
				}
				else if (v[4] == c && v[5] == c && v[3] == ' ')
				{
					sprintf(opt, "%s", "4");
				}
				else if (v[5] == c && v[3] == c && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else if (v[6] == c && v[7] == c && v[8] == ' ')
				{
					sprintf(opt, "%s", "9");
				}
				else if (v[7] == c && v[8] == c && v[6] == ' ')
				{
					sprintf(opt, "%s", "7");
				}
				else if (v[8] == c && v[6] == c && v[7] == ' ')
				{
					sprintf(opt, "%s", "8");
				}
				else if (v[0] == c && v[3] == c && v[6] == ' ')
				{
					sprintf(opt, "%s", "7");
				}
				else if (v[3] == c && v[6] == c && v[0] == ' ')
				{
					sprintf(opt, "%s", "1");
				}
				else if (v[6] == c && v[0] == c && v[3] == ' ')
				{
					sprintf(opt, "%s", "4");
				}
				else if (v[1] == c && v[4] == c && v[7] == ' ')
				{
					sprintf(opt, "%s", "8");
				}
				else if (v[4] == c && v[7] == c && v[1] == ' ')
				{
					sprintf(opt, "%s", "2");
				}
				else if (v[7] == c && v[1] == c && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else if (v[2] == c && v[5] == c && v[8] == ' ')
				{
					sprintf(opt, "%s", "9");
				}
				else if (v[5] == c && v[8] == c && v[2] == ' ')
				{
					sprintf(opt, "%s", "3");
				}
				else if (v[8] == c && v[2] == c && v[5] == ' ')
				{
					sprintf(opt, "%s", "6");
				}
				else if (v[0] == c && v[4] == c && v[8] == ' ')
				{
					sprintf(opt, "%s", "9");
				}
				else if (v[4] == c && v[8] == c && v[0] == ' ')
				{
					sprintf(opt, "%s", "1");
				}
				else if (v[8] == c && v[0] == c && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else if (v[2] == c && v[4] == c && v[6] == ' ')
				{
					sprintf(opt, "%s", "7");
				}
				else if (v[4] == c && v[6] == c && v[2] == ' ')
				{
					sprintf(opt, "%s", "3");
				}
				else if (v[6] == c && v[2] == c && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else if (v[0] == p && v[1] == p && v[2] == ' ')
				{
					sprintf(opt, "%s", "3");
				}
				else if (v[1] == p && v[2] == p && v[0] == ' ')
				{
					sprintf(opt, "%s", "1");
				}
				else if (v[2] == p && v[0] == p && v[1] == ' ')
				{
					sprintf(opt, "%s", "2");
				}
				else if (v[3] == p && v[4] == p && v[5] == ' ')
				{
					sprintf(opt, "%s", "6");
				}
				else if (v[4] == p && v[5] == p && v[3] == ' ')
				{
					sprintf(opt, "%s", "4");
				}
				else if (v[5] == p && v[3] == p && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else if (v[6] == p && v[7] == p && v[8] == ' ')
				{
					sprintf(opt, "%s", "9");
				}
				else if (v[7] == p && v[8] == p && v[6] == ' ')
				{
					sprintf(opt, "%s", "7");
				}
				else if (v[8] == p && v[6] == p && v[7] == ' ')
				{
					sprintf(opt, "%s", "8");
				}
				else if (v[0] == p && v[3] == p && v[6] == ' ')
				{
					sprintf(opt, "%s", "7");
				}
				else if (v[3] == p && v[6] == p && v[0] == ' ')
				{
					sprintf(opt, "%s", "1");
				}
				else if (v[6] == p && v[0] == p && v[3] == ' ')
				{
					sprintf(opt, "%s", "4");
				}
				else if (v[1] == p && v[4] == p && v[7] == ' ')
				{
					sprintf(opt, "%s", "8");
				}
				else if (v[4] == p && v[7] == p && v[1] == ' ')
				{
					sprintf(opt, "%s", "2");
				}
				else if (v[7] == p && v[1] == p && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else if (v[2] == p && v[5] == p && v[8] == ' ')
				{
					sprintf(opt, "%s", "9");
				}
				else if (v[5] == p && v[8] == p && v[2] == ' ')
				{
					sprintf(opt, "%s", "3");
				}
				else if (v[8] == p && v[2] == p && v[5] == ' ')
				{
					sprintf(opt, "%s", "6");
				}
				else if (v[0] == p && v[4] == p && v[8] == ' ')
				{
					sprintf(opt, "%s", "9");
				}
				else if (v[4] == p && v[8] == p && v[0] == ' ')
				{
					sprintf(opt, "%s", "1");
				}
				else if (v[8] == p && v[0] == p && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else if (v[2] == p && v[4] == p && v[6] == ' ')
				{
					sprintf(opt, "%s", "7");
				}
				else if (v[4] == p && v[6] == p && v[2] == ' ')
				{
					sprintf(opt, "%s", "3");
				}
				else if (v[6] == p && v[2] == p && v[4] == ' ')
				{
					sprintf(opt, "%s", "5");
				}
				else
				{
// this one makes the game too hard. Enven you can't win.
//					if (v[4] == c)
//					{
//						if (v[1] != p && ((v[0] == p && v[5] == p) || (v[2] == p && v[3] == p)))
//						{
//								sprintf(opt, "%s", "2");
//						}
//						else if (v[3] != p && ((v[0] == p && v[7] == p) || (v[1] == p && v[6] == p)))
//						{
//							sprintf(opt, "%s", "4");
//						}
//						else if (v[5] != p && ((v[1] == p && v[8] == p) || (v[2] == p && v[7] == p)))
//						{
//							sprintf(opt, "%s", "6");
//						}
//						else if (v[7] != p && ((v[3] == p && v[8] == p) || (v[5] == p && v[6] == p)))
//						{
//							sprintf(opt, "%s", "8");
//						}
//						else
//						{
//							r = rand()%4;
//							if (r == 0)
//							{
//								sprintf(opt, "%s", "1");
//							}
//							else if (r == 1)
//							{
//								sprintf(opt, "%s", "3");
//							}
//							else if (r == 2)
//							{
//								sprintf(opt, "%s", "7");
//							}
//							else if (r == 3)
//							{
//								sprintf(opt, "%s", "9");
//							}
//						}
//					}
					if (v[0] == c)
					{
						if (v[8] != p)
						{
						sprintf(opt, "%s", "9");
						}
						else if (v[2] != p || v[6] != p)
						{
							if (rand()%2 == 0)
							{
								sprintf(opt, "%s", "3");
							}
							else
							{
								sprintf(opt, "%s", "7");
							}
						}
					}
					else if (v[2] == c)
					{
						if (v[6] != p)
						{
							sprintf(opt, "%s", "7");
						}
						else if (v[0] != p || v[8] != p)
						{
							if (rand()%2 == 0)
							{
								sprintf(opt, "%s", "1");
							}
							else
							{
								sprintf(opt, "%s", "9");
							}
						}
					}
					else if (v[6] == c)
					{
						if (v[2] != p)
						{
							sprintf(opt, "%s", "3");
						}
						else if (v[0] != p || v[8] != p)
						{
							if (rand()%2 == 0)
							{
								sprintf(opt, "%s", "1");
							}
							else
							{
								sprintf(opt, "%s", "9");
							}
						}
					}
					else if (v[8] == c)
					{
						if (v[0] != p)
						{
							sprintf(opt, "%s", "1");
						}
						else if (v[2] != p || v[6] != p)
						{
							if (rand()%2 == 0)
							{
								sprintf(opt, "%s", "3");
							}
							else
							{
								sprintf(opt, "%s", "7");
							}
						}
					}
					else
					{
						r = rand()%9;
						if (r == 0 && v[r] == ' ')
						{
							sprintf(opt, "%s", "1");
						}
						else if (r == 1 && v[r] == ' ')
						{
							sprintf(opt, "%s", "2");
						}
						else if (r == 2 && v[r] == ' ')
						{
							sprintf(opt, "%s", "3");
						}
						else if (r == 3 && v[r] == ' ')
						{
							sprintf(opt, "%s", "4");
						}
						else if (r == 4 && v[r] == ' ')
						{
							sprintf(opt, "%s", "5");
						}
						else if (r == 5 && v[r] == ' ')
						{
							sprintf(opt, "%s", "6");
						}
						else if (r == 6 && v[r] == ' ')
						{
							sprintf(opt, "%s", "7");
						}
						else if (r == 7 && v[r] == ' ')
						{
							sprintf(opt, "%s", "8");
						}
						else if (r == 8 && v[r] == ' ')
						{
							sprintf(opt, "%s", "9");
						}
					}
				}
			}
			s = c;
		}
		if (strcmp(opt, "1") == 0 && v[0] == ' ')
		{
			v[0] = s;
			i++;
		}
		else if (strcmp(opt, "2") == 0 && v[1] == ' ')
		{
			v[1] = s;
			i++;
		}
		else if (strcmp(opt, "3") == 0 && v[2] == ' ')
		{
			v[2] = s;
			i++;
		}
		else if (strcmp(opt, "4") == 0 && v[3] == ' ')
		{
			v[3] = s;
			i++;
		}
		else if (strcmp(opt, "5") == 0 && v[4] == ' ')
		{
			v[4] = s;
			i++;
		}
		else if (strcmp(opt, "6") == 0 && v[5] == ' ')
		{
			v[5] = s;
			i++;
		}
		else if (strcmp(opt, "7") == 0 && v[6] == ' ')
		{
			v[6] = s;
			i++;
		}
		else if (strcmp(opt, "8") == 0 && v[7] == ' ')
		{
			v[7] = s;
			i++;
		}
		else if (strcmp(opt, "9") == 0 && v[8] == ' ')
		{
			v[8] = s;
			i++;
		}
		else if (strcmp(opt, "r") == 0 || strcmp(opt, "m") == 0 || strcmp(opt, "q") == 0)
		{
			break;
		}
		if ((v[0] == s && v[1] == s && v[2] == s && v[0] == v[1] && v[1] == v[2]) || (v[3] == s && v[4] == s && v[5] == s && v[3] == v[4] && v[4] == v[5]) || (v[6] == s && v[7] == s && v[8] == s && v[6] == v[7] && v[7] == v[8]) || (v[0] == s && v[3] == s && v[6] == s && v[0] == v[3] && v[3] == v[6]) || (v[1] == s && v[4] == s && v[7] == s && v[1] == v[4] && v[4] == v[7]) || (v[2] == s && v[5] == s && v[8] == s && v[2] == v[5] && v[5] == v[8]) || (v[0] == s && v[4] == s && v[8] == s && v[0] == v[4] && v[4] == v[8]) || (v[2] == s && v[4] == s && v[6] == s && v[2] == v[4] && v[4] == v[6]))
		{
			if (s == p)
			{
				p = 'w';
			}
			else if (s == c)
			{
				c = 'w';
			}
			break;
		}
		else if (i == 9 && (p != 'w' || c != 'w'))
		{
			p = 'd';
			c = 'd';
		}
	}
	while(p == 'w' || c == 'w' || (p == 'd' && c == 'd'))
	{
		system("clear");
		printf("\nTikTekToe\n");
		if (p == 'w' || c == 'w')
		{
			if (v[0] == v[1] && v[1] == v[2])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", '-', '-', '-', v[3], v[4], v[5], v[6], v[7], v[8]);
			}
				else if (v[3] == v[4] && v[4] == v[5])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", v[0], v[1], v[2],  '-', '-', '-', v[6], v[7], v[8]);
			}
			else if (v[6] == v[7] && v[7] == v[8])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", v[0], v[1], v[2], v[3], v[4], v[5], '-', '-', '-');
			}
			else if (v[0] == v[3] && v[3] == v[6])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", '|', v[1], v[2], '|', v[4], v[5], '|', v[7], v[8]);
			}
			else if (v[1] == v[4] && v[4] == v[7])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", v[0], '|', v[2], v[3], '|', v[5], v[6], '|', v[8]);
			}
			else if (v[2] == v[5] && v[5] == v[8])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", v[0], v[1], '|', v[3], v[4], '|', v[6], v[7], '|');
			}
			else if  (v[0] == v[4] && v[4] == v[8])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", '\\', v[1], v[2], v[3], '\\', v[5], v[6], v[7], '\\');
			}
			else if (v[2] == v[4] && v[4] == v[6])
			{
				printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n", v[0], v[1], '/', v[3], '/', v[5], '/', v[7], v[8]);
			}
			if (p == 'w')
			{
				printf("\nPlayer is winner.\n");
			}
			else if (c == 'w')
			{
				printf("\nComputer is winner.\n");
			}
		}
		else if (p == 'd' && c == 'd')
		{
			printf("\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8]);
			printf("The match is draw.\n\n");
		}
		printf("\nChose your option :- \n\nEnter :- r -to restart the game.\nEnter :- m -to go to main manue.\nEnter :- q -to quite the game.\n\nEnter (r/m/q) :- ");
		fgets(opt, 3, stdin);
		opt[1] = '\0';
		if (strcmp(opt, "r") == 0 || strcmp(opt, "m") == 0 || strcmp(opt, "q") == 0)
		{
			break;
		}
	}
	if (strcmp(opt, "r") == 0)
	{
		pvc();
	}
	else if (strcmp(opt, "m") == 0)
	{
		main();
	}
	else if (strcmp(opt, "q") == 0)
	{
		system("clear");
		printf("\nTikTekToe\n\nHope you have enojyed. Alvida\n");
	}
}
void pvp()
{
	system("clear");
	char opt[3], s = '\0',  p1 = '\0', p2 = '\0', v[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int i = 0;
	while (1)
	{
		system("clear");
		printf("\nTikTekToe\n\nChose symble for Player 1 :-\n\n1. o\n2. x\n\nEnter :- m -to go to main manue.\nEnter :- q -to quite the game.\n\nEnter (1/2/m/q) :- ");
		fgets(opt, 3, stdin);
		opt[1] = '\0';
		if (strcmp(opt, "1") == 0 || strcmp(opt, "2") == 0 || strcmp(opt, "m") == 0 || strcmp(opt, "q") == 0)
		{
			break;
		}
	}
	if (strcmp(opt, "1") == 0)
	{
		p1 = 'o';
		p2 = 'x';
	}
	else if (strcmp(opt, "2") == 0)
	{
		p1 = 'x';
		p2 = 'o';
	}
	while ((p1 == 'o' || p1 == 'x') && (p2 == 'o' || p2 == 'x') && i < 10)
	{
		system("clear");
		printf("\nTikTekToe\n\nSymbol for Player 01 is :- %c\nSymbol for Player 02 is :- %c\n\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\nEnter :-   r   -to restart the game.\nEnter :-   m   -to go to main manue.\nEnter :-   q   -to quite the game.\nEnter :- (1-9) -to place your strick.\n\n", p1, p2, v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8]);
		if ((i == 0 || i%2 == 0) && i < 9)
		{
			printf("Enter the option for player 01 :- ");
			fgets(opt, 3, stdin);
			opt[1] = '\0';
			s = p1;
		}
		else if ((i != 0 || i%2 != 0) && i < 9)
		{
			printf("Enter the option for player 02 :- ");
			fgets(opt, 3, stdin);
			opt[1] = '\0';
			s = p2;
		}
		if (strcmp(opt, "1") == 0 && v[0] == ' ')
		{
			v[0] = s;
			i++;
		}
		else if (strcmp(opt, "2") == 0 && v[1] == ' ')
		{
			v[1] = s;
			i++;
		}
		else if (strcmp(opt, "3") == 0 && v[2] == ' ')
		{
			v[2] = s;
			i++;
		}
		else if (strcmp(opt, "4") == 0 && v[3] == ' ')
		{
			v[3] = s;
			i++;
		}
		else if (strcmp(opt, "5") == 0 && v[4] == ' ')
		{
			v[4] = s;
			i++;
		}
		else if (strcmp(opt, "6") == 0 && v[5] == ' ')
		{
			v[5] = s;
			i++;
		}
		else if (strcmp(opt, "7") == 0 && v[6] == ' ')
		{
			v[6] = s;
			i++;
		}
		else if (strcmp(opt, "8") == 0 && v[7] == ' ')
		{
			v[7] = s;
			i++;
		}
		else if (strcmp(opt, "9") == 0 && v[8] == ' ')
		{
			v[8] = s;
			i++;
		}
		else if (strcmp(opt, "r") == 0 || strcmp(opt, "m") == 0 || strcmp(opt, "q") == 0)
		{
			break;
		}
		if ((v[0] == s && v[1] == s && v[2] == s && v[0] == v[1] && v[1] == v[2]) || (v[3] == s && v[4] == s && v[5] == s && v[3] == v[4] && v[4] == v[5]) || (v[6] == s && v[7] == s && v[8] == s && v[6] == v[7] && v[7] == v[8]) || (v[0] == s && v[3] == s && v[6] == s && v[0] == v[3] && v[3] == v[6]) || (v[1] == s && v[4] == s && v[7] == s && v[1] == v[4] && v[4] == v[7]) || (v[2] == s && v[5] == s && v[8] == s && v[2] == v[5] && v[5] == v[8]) || (v[0] == s && v[4] == s && v[8] == s && v[0] == v[4] && v[4] == v[8]) || (v[2] == s && v[4] == s && v[6] == s && v[2] == v[4] && v[4] == v[6]))
		{
			if (s == p1)
			{
				p1 = 'w';
			}
			else if (s == p2)
			{
				p2 = 'w';
			}
			break;
		}
		else if (i == 9 && (p1 != 'w' || p2 != 'w'))
		{
			p1 = 'd';
			p2 = 'd';
		}
	}
	while(p1 == 'w' || p2 == 'w' || (p1 == 'd' && p2 == 'd'))
	{
		system("clear");
		if (p1 == 'w' || p2 == 'w')
		{
			printf("\nTikTekToe\n\n");
			if (v[0] == v[1] && v[1] == v[2])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", '-', '-', '-', v[3], v[4], v[5], v[6], v[7], v[8]);
			}
				else if (v[3] == v[4] && v[4] == v[5])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", v[0], v[1], v[2],  '-', '-', '-', v[6], v[7], v[8]);
			}
			else if (v[6] == v[7] && v[7] == v[8])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", v[0], v[1], v[2], v[3], v[4], v[5], '-', '-', '-');
			}
			else if (v[0] == v[3] && v[3] == v[6])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", '|', v[1], v[2], '|', v[4], v[5], '|', v[7], v[8]);
			}
			else if (v[1] == v[4] && v[4] == v[7])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", v[0], '|', v[2], v[3], '|', v[5], v[6], '|', v[8]);
			}
			else if (v[2] == v[5] && v[5] == v[8])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", v[0], v[1], '|', v[3], v[4], '|', v[6], v[7], '|');
			}
			else if  (v[0] == v[4] && v[4] == v[8])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", '\\', v[1], v[2], v[3], '\\', v[5], v[6], v[7], '\\');
			}
			else if (v[2] == v[4] && v[4] == v[6])
			{
				printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", v[0], v[1], '/', v[3], '/', v[5], '/', v[7], v[8]);
			}
			if (p1 == 'w')
			{
				printf("Player 01 is winner.\n\n");
			}
			else if (p2 == 'w')
			{
				printf("Player 02 is winner.\n\n");
			}
		}
		else if (p1 == 'd' && p2 == 'd')
		{
			printf("\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\t---|---|---\n\t %c | %c | %c \n\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8]);
			printf("The match is draw.\n\n");
		}
		printf("Chose your option :- \n\nEnter :- r -to restart the game.\nEnter :- m -to go to main manue.\nEnter :- q -to quite the game.\n\nEnter (r/m/q) :- ");
		fgets(opt, 3, stdin);
		opt[1] = '\0';
		if (strcmp(opt, "r") == 0 || strcmp(opt, "m") == 0 || strcmp(opt, "q") == 0)
		{
			break;
		}
	}
	if (strcmp(opt, "r") == 0)
	{
		pvp();
	}
	else if (strcmp(opt, "m") == 0)
	{
		main();
	}
	else if (strcmp(opt, "q") == 0)
	{
		system("clear");
		printf("\nTikTekToe\n\nHope you have enojyed. Alvida\n");
	}
}