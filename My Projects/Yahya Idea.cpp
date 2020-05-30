#include <iostream>
using namespace std;

int main()
{
	bool check = false;
	do
	{
		string name[] = { "mohammed" , "Yahya" , "Ammar" , "Fras" };
		int price[size(name)], Hamount, x, sum = 0;

		cout << "Please Enter The Whole Amount --> ";
		cin >> Hamount;

		x = Hamount / size(name);

		for (int i = 0; i < size(name); i++)
		{
			cout << name[i] << " How Much Did You Paid ... " << endl;
			cin >> price[i];
			sum += price[i];
		}

		cout << endl;

		if (sum > Hamount)
		{
			check = false;
			cout << "There is a Wrong in Computing, Please Try Again" << endl;
		}
		else if (sum > 0 && sum <= Hamount)
		{
			check = true;
			for (int i = 0; i < size(name); i++)
			{
				int y = 0;

				if (price[i] == x)
				{
					cout << name[i] << " You Have Paid The Full Amount" << endl;
				}
				else if (price[i] > x)
				{
					y = price[i] - x;
					cout << name[i] << " The Amount Remaining For You = " << y << endl;
				}
				else if (price[i] < x)
				{
					y = x - price[i];
					cout << name[i] << " The Amount Remaining on You = " << y << endl;
				}
			}
		}

	} while (check == false);



	return 0;
}