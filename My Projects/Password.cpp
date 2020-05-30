#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

bool password(string pass)
{
	char chara[] = { '@' , '#' , '$' , '*' , '!' , '%' , '&' , '-' , '_'};

	bool check = false;
	bool check1 = false;
	bool check2 = false;
	

	/* The Alphabet Letters */
	for (int i = 0; i < pass.size(); i++)
	{
		if (isalpha(pass[i]))
		{
			/* Capital Letters */
			if (isupper(pass[i]))
			{
				check2 = true;
				break;
			}
			
			else
			{
				check2 = false;
			}
		
		}
	}

	/* The Special Characters */
	for (int i = 0; i <= pass.size(); i++)
	{
		for (int j = 0; j <=pass.size(); j++)
		{
			if (pass[i] == chara[j])
			{
				check = true;
				break;
			}
		}
		//if (check)
			//break;
	}

	/* The Numbers */
	for (int m = 0; m <= pass.size(); m++)
	{
		if (isdigit(pass[m]))
		{
			check1 = true;
			break;
		}
		else
		{
			check1 = false;
		}
	}

	return (check && check1 && check2);
}

bool repassword(string repass , string pass)
{
	bool check3 = false;
	
	if (repass == pass)
	{
		Sleep(1500);
		system("cls");
		system("color a");
		check3 = true;
		cout << "Your Password Accepted.\nThank You." << endl;
	}
	else
	{
		system("cls");
		system("color c");
		check3 = false;
		cout << "There is No Compare in Your Password, Please Enter The Same Password." << endl;
	}

	return (check3);
}

int main()
{

	string pass; // [moh@123]
	string repass;

	
	do
	{
		system("cls");
		system("color e");
		cout << "Please Enter Password With The Condestion"
				"(Special Character, Numbers, At Least One Capital Letter)."
				"\nEnter Your Password ---> ";
		
		getline(cin, pass);

	} while (!password(pass));

	if (password(pass))
	{
		do
		{
			cout << "Re-Enter Your Password ---> ";
			getline(cin, repass);
			cout << "One Seconde." << endl;
			
		} while (!repassword(repass, pass));
	}


	return 0;
}