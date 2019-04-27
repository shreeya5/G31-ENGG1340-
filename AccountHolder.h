#ifndef AccountHolder_h
#define AccountHolder_h //guards

#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Account
{
	vector <string> category;
	vector <double> value;
};

class AccountHolder
{
	public:
		//function prototypes of all functions used in filehandling.cpp, functions.cpp and main.cpp

		void readFromFile();
		void BudgetCheck(double);
		void ManageExpenses();
		void ManageIncomes();
		void ManageBudget();
		void ManageAccountLogs();
		void TransferAmount();
		void ViewStats();
		void MainMenu();
		void ManageCommands(int);
		void writeToFile();
		bool Check_date(string);

	//the following variables are public as they are used by the three aforementioned .cpp files
	string username, date;
	double budget;
	Account income, expense, logs;

};

#endif
