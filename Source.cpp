#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
class Student
{		//Use Getter Setter to follow OOP Paradigms
public:
	string fname;
	string lname;
	string cnic;
};
Student* readData()
{
	static Student s[300];
	int i=0;
	fstream file;
	file.open("data.txt", ios::in);
	while (!file.eof())
	{
		getline(file,s[i].fname);
		getline(file, s[i].lname);
		getline(file, s[i].cnic);
		i++;
	}
	file.close();
	return s;
}
void main()
{
	Student* s;
	s = readData();
	
	int choice;
	cout << "Press 1) for displaying random Students\nPress 2) for checking duplicate CNIC \nPress 3) to search by name\nPress 4 to search by CNIC\nYour choice: ";
	cin >> choice;
	if (choice == 1)
	{
		int size;
		cout << "Please Enter number of students to randomize: ";
		cin >> size;
		int* randomDepartment = new int[size];
		int* randomStudents = new int[size];
		for (int i = 0; i < size; i++)
		{
			randomDepartment[i] = rand() % 7;
			randomStudents[i] = rand() % 300;
			/*cout <<"Rnadom Departments"<< randomDepartment[i] << endl;
			cout << "Rnadom Students" << randomStudents[i] << endl;*/
		}
		for (int i = 0; i < size; i++)
		{
			if (randomDepartment[i] == 0)
			{
				cout << "Random Program Selected: Software Engineeing\n";
				cout << "Name: " << s[randomStudents[i]].fname << endl;
				cout << "Father's Name: " << s[randomStudents[i]].lname << endl;
				cout << "CNIC: " << s[randomStudents[i]].cnic << endl;
			}
			else if (randomDepartment[i] == 1)
			{
				cout << "Random Program Selected: Commputer Engineeing\n";
				cout << "Name: " << s[randomStudents[i]].fname << endl;
				cout << "Father's Name: " << s[randomStudents[i]].lname << endl;
				cout << "CNIC: " << s[randomStudents[i]].cnic << endl;
			}
			else if (randomDepartment[i] == 2)
			{
				cout << "Random Program Selected: Electrical Engineeing\n";
				cout << "Name: " << s[randomStudents[i]].fname << endl;
				cout << "Father's Name: " << s[randomStudents[i]].lname << endl;
				cout << "CNIC: " << s[randomStudents[i]].cnic << endl;
			}
			else if (randomDepartment[i] == 3)
			{
				cout << "Random Program Selected: Business Administration\n";
				cout << "Name: " << s[randomStudents[i]].fname << endl;
				cout << "Father's Name: " << s[randomStudents[i]].lname << endl;
				cout << "CNIC: " << s[randomStudents[i]].cnic << endl;
			}
			else if (randomDepartment[i] == 4)
			{
				cout << "Random Program Selected: Social Sciences\n";
				cout << "Name: " << s[randomStudents[i]].fname << endl;
				cout << "Father's Name: " << s[randomStudents[i]].lname << endl;
				cout << "CNIC: " << s[randomStudents[i]].cnic << endl;
			}
			else if (randomDepartment[i] == 5)
			{
				cout << "Random Program Selected: Earth Sciences\n";
				cout << "Name: " << s[randomStudents[i]].fname << endl;
				cout << "Father's Name: " << s[randomStudents[i]].lname << endl;
				cout << "CNIC: " << s[randomStudents[i]].cnic << endl;
			}
			else if (randomDepartment[i] == 6)
			{
				cout << "Random Program Selected: LLB\n";
				cout << "Name: " << s[randomStudents[i]].fname << endl;
				cout << "Father's Name: " << s[randomStudents[i]].lname << endl;
				cout << "CNIC: " << s[randomStudents[i]].cnic << endl;
			}
		}
	}
	else if (choice == 2)
	{
		/*int* arr = new int[];*/
		int matchA;
		int matchB;
		for (int i = 0; i <= 300; i++)
		{
			for (int j = 1; j <= 300; j++)
			{
				if (s[i].cnic == s[j].cnic)
				{
					cout << "Duplicated Cnic Detected\n";
					matchA = i;
					matchB = j;
				}
			}
			break;
		}
		cout << "Name: " << s[matchA].fname << " CNIC: " << s[matchA].cnic << endl;
		cout << "Matched with\n";
		cout << "Name: " << s[matchB].fname << " CNIC: " << s[matchB].cnic << endl;
	}
	else if (choice == 3)
	{
		cin.ignore();
		string nameSearch;
		cout << "Please Enter name for search: ";
		getline(cin, nameSearch);
		for (int i = 0; i < 300; i++)
		{
			if (s[i].fname == nameSearch)
			{
				cout << "Record Found!" << endl;
				cout << "Name:" << s[i].fname << endl;
				cout << "Father's Name: " << s[i].lname << endl;
				cout << "CNIC: " << s[i].cnic << endl;
			}
		}
	}
	else if (choice == 4)
	{
		cin.ignore();
		string cnicSearch;
		cout << "Please Enter CNIC for search: ";
		getline(cin, cnicSearch);
		for (int i = 0; i < 300; i++)
		{
			if (s[i].cnic == cnicSearch)
			{
				cout << "Record Found!" << endl;
				cout << "Name:" << s[i].fname << endl;
				cout << "Father's Name: " << s[i].lname << endl;
				cout << "CNIC: " << s[i].cnic << endl;
			}
		}
	}
	else
	{
		cout << "invalid choice\n" << endl;
	}
	system("Pause");
}