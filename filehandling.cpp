#include <iostream>
#include <string>
#include <fstream>
#include "AccountHolder.h"

using namespace std;
void AccountHolder::readFromFile()
{
  int i,j;
  string line, group;
  double amount;
  ifstream fin;
  string filename = username + ".txt";
  fin.open(filename.c_str());
  if (fin.fail())
  {
    //cout << "Failed to open "<<username <<".txt"<< endl;//commented out because the file is being created only when the user finally exits the application
    return;
  }
  j = 0;
  getline(fin,line);
  //taking inputs for the category of incomes and storing them in the vector income.category
  for (i = 0; i<line.length();i++)
  {
    if (line[i]==' ')
    {
      group = line.substr(j,(i-j));
      income.category.push_back(group);
      j=i+1;
    }
  }
  j = 0;
  getline(fin,line);
  //taking inputs for the value of incomes and storing them in the vector income.value
  for (i = 0; i<line.length();i++)
  {
    if (line[i]==' ')
    {
      group = line.substr(j,(i-j));
      income.value.push_back(stof(group));
      j=i+1;
    }
  }
  fin.ignore();
  j = 0;
  getline(fin,line);
  //taking inputs for the category of expenses and storing them in the vector expense.category
  for (i = 0; i<line.length();i++)
  {
    if (line[i]==' ')
    {
      group = line.substr(j,(i-j));
      expense.category.push_back(group);
      j=i+1;
    }
  }
  j = 0;
  getline(fin,line);
  //taking inputs for the value of expenses and storing them in the vector expense.value
  for (i = 0; i<line.length();i++)
  {
    if (line[i]==' ')
    {
      group = line.substr(j,(i-j));
      expense.value.push_back(stof(group));
      j=i+1;
    }
  }
  fin.ignore();
  j = 0;
  getline(fin,line);
  //taking inputs for the category of accountlog and storing them in the vector logs.category
  for (i = 0; i<line.length();i++)
  {
    if (line[i]==' ')
    {
      group = line.substr(j,(i-j));
      logs.category.push_back(group);
      j=i+1;
    }
  }
  j = 0;
  getline(fin,line);
  //taking inputs for the value of accountlog and storing them in the vector logs.value
  for (i = 0; i<line.length();i++)
  {
    if (line[i]==' ')
    {
      group = line.substr(j,(i-j));
      logs.value.push_back(stof(group));
      j=i+1;
    }
  }
  fin.ignore();
  fin >> budget;
  fin.close();
}

void AccountHolder::writeToFile()
{
  int i;
  ofstream fout;
  fout.open((username+".txt").c_str());
  //writing categories and values of income, expense and log respectively
  for (i=0;i<income.category.size();i++)
  {
    fout << income.category[i]<<" ";
  }
  fout<<endl;
  for (i=0;i<income.value.size();i++)
  {
    fout << income.value[i]<<" ";
  }
  fout<<endl;
  fout<<endl;
  for (i=0;i<expense.category.size();i++)
  {
    fout << expense.category[i]<<" ";
  }
  fout<<endl;
  for (i=0;i<expense.value.size();i++)
  {
    fout << expense.value[i]<<" ";
  }
  fout<<endl;
  fout<<endl;
  for (i=0;i<logs.category.size();i++)
  {
    fout << logs.category[i]<<" ";
  }
  fout<<endl;
  for (i=0;i<logs.value.size();i++)
  {
    fout << logs.value[i]<<" ";
  }
  fout<<endl;
  fout<<endl;
  fout<<budget;
  fout.close();
}//End of filehandling.cpp
