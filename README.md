# AccountsManagementSystem
This is the readme file for the repository for group 31 (Shreeya Agarwal &amp; Shuvam Mishra) of ENGG1340.

## Problem Statement:
For the past few years, millenials have been accused for lacking basic financial literacy by the baby-boomer generation. While it is true that a level of negligence has creeped in, the problem lies in the fact that this generation is not as exposed to their finances as their parents which has led to them not speaking about this in the open. What we aim to do is to simply provide people of all ages a simple and easy way to access the basics of their personal finances in a manner that's easy to understand and provides a clear pathway to get back on the right track.
As a result of this system, we plan to *place power back in the hands of the consumer* by giving them a detailed analysis of their finances. 

## Program Features:

This menu driven program will create .txt files for all its respective users and store their income, expenses, account logs and budget details in those files. It uses dynamic memory to store the category and amount of incomes, expenses and account logs. When the user exits the program, his/her respective .txt file is updated and all changed made are then stored in it for future use. Therefore, it uses File I/O to provide a Log-in feature and save the updated made by users constantly. 

### Required features:
1. Create different **Account logs** like Savings, Curent, Cedit_Card, Octopus, Cash, etc.
2. Adding **Incomes** and **Expenses** by category and amount.
3. **Editing and Deleting** existing records at any time.
4. Set a **Personal Budget** and recieve notification if budget is reached.
5. **View finances** category wise.


### Additional features:
1. Provide a **Log-in Feature** using UserIDs so that users don't have to enter all details again. Our system will store the previous details for them and display it upon login.
2. Option to **Transfer** money from one account to another.
3. **Forecasting** of next month's budget based on current daily expenditure.
4.  View **percentage breakdown** of income, expenses and account logs and manage budget to help you analyse your personal finances by helping you keep a track of your income and expenditure sources.

## Execution

1. Clone our repository on your system using the following command
> git clone https://github.com/engg1340-g31/AccountsManagementSystem
2. Navigate to the local repository stored on your system using the *cd* command
3. Run the program using the following command
> make run
4. Use the AccountsManagementSystem by following the instructions on the screen. 

Video Tutorial: https://youtu.be/DSqv3BW1lN4
 

## How does our System meet the Project Requirements?

1. **Dynamic memory management** - Our system uses dynamic memory in the form of class and vectors. The system can therefore handle multiple users with files of varying sizes.
2. **File input/output** - Our system created a .txt file for each of its users to store their details and re-writes those files upon any updation. It also created a .txt file that stores all usernames in order to ensure use of unique usernames.
3. **Data manipulation** - Our System allows the user to add/edit/delete records and also provides a statistical overview with % breakdowns making it easir for the user to track their finances.
4. **Program codes in multiple files** - Our code is broken down into 3 .cpp files and one .h file to implement class and have used Makefile to generate the executable(run) to run the code.
5. **Proper indentation and naming styles** - The function prototypes, Variable names, file names, etc have all been named according to their use in order to ensure easy readability and understanding of the code.
6. **In-code documentation** - We have included comments to describe the utility of every function and operation wherever required to ensure easy understanding and readibility of the code.

## Potential Improvements

1. Addition of date, time and location stamps for each transaction (income/expense) to provide a better analysis of the users finances. 
2. Provision of statistical graphs and pie-charts can also help in improving the user-interface and help them analyse their finaced in a better way. 

--- Shuvam Mishra (3035550004) and Shreeya Agarwal (3035552519)

Please contact us at shuvam@connect.hku.hk or shreeya5@connect.hku.hk
