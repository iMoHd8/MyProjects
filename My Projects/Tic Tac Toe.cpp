#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void tictactoe(string p[][3] , string Player1 , string Player2 )
{
	int p1,p2;
	int counterp1 = 0, counterp2 = 0;
	bool check = false;
	bool checkp1 = false , checkp2 = false;
	bool retext = false;
	bool retext1 = false;

	for (int i = 0; i < sizeof(p) - 1; i++)
	{
		for (int j = 0; j < sizeof(p) - 1; j++)
		{
			if (j > 0 && j <= 2)
				cout << " | ";
			cout << p[i][j];
		}
		cout << endl;
		if (i >= 0 && i < 2)
			cout << "---------" << endl;
	}
	
	do
	{
		//do
		//{
			if (check == false || retext == false)
			{
				cout << Player1 << " Enter Your Choice : ";
				system("Color b");
				cin >> p1;
				counterp1++;
				cout << endl;
				system("cls");
				for (int i = 0; i < sizeof(p) - 1; i++)
				{
					for (int j = 0; j < sizeof(p) - 1; j++)
					{	
						if (j > 0 && j <= 2)
							cout << " | ";
						if (p1 > 0 && p1 <= 9 && p[0][p1 - 1] != "O")
						{
							
							retext = true;
							p[0][p1 - 1] = "X";
							cout << p[i][j];
						}
						else
						{
							retext = false;
							cout << p[i][j];
						}
					}
					cout << endl;
					if (i >= 0 && i < 2)
						cout << "---------" << endl;
				}
				
				if (counterp1 == 5)
				{
					checkp1 = true;
					break;
				}
			}
		//} while (retext == false);
		
		for (int i = 0; i < sizeof(p) - 1; i++)
		{
			for (int j = 0; j < sizeof(p) - 1; j++)
			{
				if (p[i][0] == "X" && p[i][1] == "X" && p[i][2] == "X")
				{
					cout << endl << Player1 << " Wins. \n";
					check = true;
					break;
				}
				else if (p[0][j] == "X" && p[1][j] == "X" && p[2][j] == "X")
				{
					cout << endl << Player1 << " Wins. \n";
					check = true;
					break;
				}
				else if (p[0][0] == "X" && p[1][1] == "X" && p[2][2] == "X")
				{
					cout << endl << Player1 << " Wins. \n";
					check = true;
					break;
				}
				else if (p[0][2] == "X" && p[1][1] == "X" && p[2][0] == "X")
				{
					cout << endl << Player1 << " Wins. \n";
					check = true;
					break;
				}
			}
			if (check)
				break;
		}
		
		//do
		//{
			if (check == false || retext1 == false)
			{
				cout << Player2 << " Enter Your Choice : ";
				system("Color b");
				cin >> p2;
				counterp2++;
				cout << endl;
				system("cls");
				for (int i = 0; i < sizeof(p) - 1; i++)
				{
					for (int j = 0; j < sizeof(p) - 1; j++)
					{
						if (j > 0 && j <= 2)
							cout << " | ";
						if (p2 > 0 && p2 <= 9 && p[0][p2 - 1] != "X")
						{
							retext1 = true;
							p[0][p2 - 1] = "O";
							cout << p[i][j];
						}
						else
						{
							retext1 = false;
							cout << p[i][j];
						}
					}
					cout << endl;
					if (i >= 0 && i < 2)
						cout << "---------" << endl;
				}

				if (counterp2 == 5)
				{
					checkp2 = true;
					break;
				}
			}
		//} while (retext1 == false);
			
		for (int i = 0; i < sizeof(p) - 1; i++)
		{
			for (int j = 0; j < sizeof(p) - 1; j++)
			{
				if (p[i][0] == "O" && p[i][1] == "O" && p[i][2] == "O")
				{
					cout << endl << Player2 << " Wins. \n";
					check = true;
					break;
				}
				else if (p[0][j] == "O" && p[1][j] == "O" && p[2][j] == "O")
				{
					cout << endl << Player2 << " Wins. \n";
					check = true;
					break;
				}
				else if (p[0][0] == "O" && p[1][1] == "O" && p[2][2] == "O")
				{
					cout << endl << Player2 << " Wins. \n";
					check = true;
					break;
				}
				else if (p[0][2] == "O" && p[1][1] == "O" && p[2][0] == "O")
				{
					cout << endl << Player2 << " Wins. \n";
					check = true;
					break;
				}
			}
			if (check)
				break;
		}
	} while (check == false && retext && retext1 && checkp1 == false && checkp2 == false);

	if (counterp1 == 5 && counterp2 == 4)
		cout << "\nGame is Tied. Tru again." << endl;


	

}

int main()
{
	string poard[][3] = { "1","2","3","4","5","6","7","8","9" };
	string Player1 , Player2;

	/*{
		// åíßá ÌÇåÒ áÊÛííÑ ÍÌã æäæÚ ÇáÎØ

		CONSOLE_FONT_INFOEX SIZZE;
		SIZZE.cbSize = sizeof(SIZZE);
		SIZZE.nFont = 0;
		SIZZE.dwFontSize.X = 0;                   // Width of each character in the font
		SIZZE.dwFontSize.Y = 24;                  // Height
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &SIZZE);
	};*/

	cout << "\t\t\t\tWELCOME TO TIC TAC TOE GAME.\n";
	cout << "PLEASE ENTER NAME OF PLAYERS:\n";
	cout << "PLAYER ONE ---> ";
	cin >> Player1;
	cout << "PLAYER TWO ---> ";
	cin >> Player2;
	system("cls");
	tictactoe(poard , Player1 , Player2);
	cout << endl;



	return 0;
}