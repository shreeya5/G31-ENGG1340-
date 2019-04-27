#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "AccountHolder.h"

using namespace std;

//Function to Display the login/sign up options
void Login_Screen()
{
	cout << "1. Do you want to create a new account?" << endl;
	cout << "2. Do you want to log in an existing account?" << endl;
	cout << "3. Close application."<<endl;
	cout << "\nPlease enter your prefered option : ";
}
bool AccountHolder::Check_date(string x)
{
	int monthdates[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int dd, mm, yy, i;
	dd = stoi(x.substr(0,2));
  mm = stoi(x.substr(3,2));
  yy = stoi(x.substr(6,2));
  if(x.length()!= 8 || x[2]!= '/' || x[5]!= '/' || mm < 0 || mm > 12 || dd < 0 || dd > monthdates[mm]|| yy<0)
  {
    cout << "Incompatible.\n";
    return false;
  }
  return true;
}

//Function to coordinate login/sign up options and further user inputs
int main()
{
	AccountHolder user; //creating an object of the class for the current user
	Login_Screen();
	int userChoice, choice_of_action;
	string name, username;
	bool usernameExists, flag, flag2;
	cin >> userChoice; //taking user input from login screen
	flag = false;
	flag2 = false;
	string d;
	if(userChoice != 3)
	{
			cout<< "\nPlease enter username : ";
			cin.ignore();
			getline(cin,name);
			do
			{
				cout <<"\nEnter today's date in dd/mm/yy format : ";
				getline(cin,d);
				flag2 = user.Check_date(d);
			} while(flag2 == false);
	}
	user.date = d;

	vector <string> usernames;
	ofstream fout;
	ifstream fin;
	fin.open("userids.txt");
	while(getline(fin, username))
	{
		usernames.push_back(username); //creating a ventor with all user ids
	}
	fin.close();

	switch(userChoice)
	{
		case 1:
			for(int j=0; j<usernames.size(); j++)
			{
				if(name==usernames[j]) //checking if username enetered by the user is unique
				{
					cout << "Username already exists. Please enter another one." << endl;
					getline(cin,name);
					j=-1;
				}
			}
			user.username = name;//storing the user id of the cureent user in the object variable
			usernames.push_back(name); //adding new username to the usernames vector
			break;

		case 2:
			usernameExists = false;
			for(int j=0; j<usernames.size(); j++)
			{
				if(name==usernames[j])
				{
					usernameExists = true;
					user.username = name;
					break;
				}
			}
			if(usernameExists==false) //to check if username inputted is valid
			{
				while (flag == false)
				{
					cout << "Username does not exist! Please try again." << endl;
					getline(cin, name);
					for(int j=0; j<usernames.size(); j++)
					{
						if(name==usernames[j])
						{
							flag = true;
							user.username = name;
							usernames.push_back(name);
							break;
						}
					}
				}
			}
			break;
		case 3:
			cout <<"Successfully closed application"<<endl;
			return 0;
			break;

		default:
			cout << "Invalid Input!" << endl;
	}

	//updating file userids.txt

	fout.open("userids.txt");
	if(fout.fail())
	{
		cout << "Error in opening Userids.txt \n"; //re-write file uderids with all usernames including the new signup (if any)
		exit(1);
	}
	for(int j = 0; j<usernames.size(); j++)
	{
		fout << usernames[j] << "\n";
	}
	fout.close();

	user.readFromFile(); //reading the users previous records from the text file created for them
	do
	{
		user.MainMenu();
		cout << "Please enter your choice : ";
		cin >> choice_of_action;
		user.ManageCommands(choice_of_action);
	}while(choice_of_action != 7);
	user.writeToFile(); //writing the changes on to the user's text file after operations
	return 0;
}
