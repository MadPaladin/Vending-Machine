#include"stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int money;
int choice;

int cola = 5;
int pepsi = 3;
int sprite = 6;
int redbull = 10;
int fanta = 6;

int main()
{
	cout << "Welcome to my fucking cola machine! Gimme munniz pls!" << endl;
	cin >> money;
	cout << "You have inserted  " << money << "  munniz into my machine" << endl;
	cout << "choose your beverage!" << endl;
	cout << "1.Cola\n";
	cout << "2.Pepsi\n";
	cout << "3.Sprite\n";
	cout << "4.Red Bull\n";
	cout << "5.Fanta" << endl;

	cin >> choice;

	if (choice == 1)
	{
		cout << "You chose Cola it costs 5 munniz" << endl;
		if (money < 5)
		{
			cout << "You dont have enought munniz for Cola!" << endl;
			system("pause");
			return 0;
		}
	
			cout << "Your change is  " << money - cola <<" munniz" << endl;
			cout << "Have a nice fucking day!" << endl;
		
	}
	else if (choice == 2)
	{
		cout << "You chose Pepsi it costs 3 munniz" << endl;
		if (money < 3)
		{
			cout << "You dont have enought munniz for Pepsi!" << endl;
			system("pause");
			return 0;
		}
		cout << "Your change is  " << money - pepsi << " munniz" <<endl;
		cout << "Have a nice fucking day!" << endl;
		
	}
	else if (choice == 3)
	{
		cout << "You chose Sprite it costs 6 munniz" << endl;
		if (money < 6)
		{
			cout << "You dont have enought munniz for Sprite!" << endl;
			system("pause");
			return 0;
		}
		cout << "Your change is  " << money - sprite << " munniz" <<endl;
		cout << "Have a nice fucking day!" << endl;
		if (money < 6)
		{
			cout << "You dont have enought munniz for Sprite!" << endl;
			system("pause");
			return 0;
		}
	}
	else if (choice == 4)
	{
		cout << "You chose Red Bull it costs 10 munniz" << endl;
		if (money < 10)
		{
			cout << "You dont have enought munniz for Red Bull!" << endl;
			system("pause");
			return 0;
		}
		cout << "Your change is  " << money - redbull << " munniz" <<endl;
		cout << "Have a nice fucking day!" << endl;
		
	}
	else if(choice == 5)
	{
		cout << "You chose Fanta it costs 6 munniz" << endl;
		if (money < 6)
		{
			cout << "You dont have enought munniz for Fanta!" << endl;
			system("pause");
			return 0;
		}
		cout << "Your change is  " << money - fanta << " munniz" <<endl;
		cout << "Have a nice fucking day!" << endl;
	

	}
	else
	{
		cout << "That is not a valid chocie take your munniz!" << endl;
	}
	system("pause");

    return 0;
}

