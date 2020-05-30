#include <iostream>
#include <string>
using namespace std;

int main()
{
	string lm[5]; //= { "mohammed" , "ahmad" , "saad" , "ahmad" , "omer" };
	int c1 = 0, c2 = 4;

	for (int i = 0; i < 5; i++)
	{
		cin >> lm[i];

	}

	for (int j = 0; j < 5; j++)
	{
		for (int m = 4; m >= 0; m--)
		{
			if (lm[j] == lm[m] && j != m)
			{
				cout << endl << lm[j] << " is Repeated" << endl;
			}
			else
			{
				if (j == m)
				{
					break;
				}
			}
		}
	}



	return 0;
}