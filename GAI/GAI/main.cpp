#include<iostream>
#include<string>
#include<map>
#include<forward_list>
#include"Crime.h"
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;

void print(const map < string, forward_list<Crime>>& database);
void print(const map < string, forward_list<Crime>>& database, const string& id);
void print(const map < string, forward_list<Crime>>& database, const string& start_id, const string& end_id);

void main()
{
	setlocale(LC_ALL, "");
	map<string, forward_list<Crime>>database =
	{
		pair<string,forward_list<Crime>>("BI 6666 BC",{Crime("��� �� ����","������ � ������ ������� ������, � ���������� ���� ����� ������ ������ ������,� ������� �����")}),
		pair<string,forward_list<Crime>>("BI 4567 BC", {Crime("McDonalds", "������ � ���� ���")}),
		pair<string,forward_list<Crime>>("BT 2134 CI", {Crime("��� �� ����", "���� ����� ����� ������")})

	};
	do
	{
		system("CLS");
		char key;
		cout << "\n1. ����� ���� ����;" << endl;
		cout << "2. ����� ���������� �� ������;" << endl;
		cout << "3. ����� ���������� �� ��������� �������;" << endl;
		cout << "4. ���������� ������;" << endl;
		cout << "�������� ��������: "; cin >> key;
		switch (key)
		{
		case'1': system("CLS"); print(database); break;
		case'2':
		{
			system("CLS");
			string id;
			cout << "������� ����� ����������: "; cin.clear();
			cin.clear();
			cin.ignore();
			getline(cin, id);
			print(database, id);
			break;
		}
		case'3':system("CLS");
		{
			string start_id, end_id;
			cout << "������� ��������� �����:  "; 
			cin.clear();
			cin.ignore();
			getline(cin, start_id);
			cout << "������� �������� �����:  "; 
			//cin.clear();
			cin.ignore();
			getline(cin, end_id);
			print(database, start_id, end_id);
		}
		}
	} while (getch() != 27);//��� ���� ����� ���������� conio.h !
	//	cout<< database.size() << endl;
}
void print(const map< string, forward_list<Crime >> &database)
{
	for (pair<string, forward_list<Crime>> i : database)
	{
		cout << i.first << "\t\n";
		for (Crime j : i.second)
		{
			cout << "����� �����������: " << j.get_place() << "\t\n" << ".���������:" << j.get_crime() << endl;
		}
	}
}void print(const map< string, forward_list<Crime >> &database, const string& id)
{
	//cout<<database[id].
	bool present_in_base = false;
	for (pair<string, forward_list<Crime>> i : database)
	{
		if (id == i.first)
		{
			present_in_base = true;
			for (Crime j : i.second)
			{
				cout << j.get_place() << "\t\n" << j.get_crime() << endl;
			}
			break;
		}
	}
	if (!present_in_base)cout << "� ���� ��� ������ ������" << endl;
}
void print(const map < string, forward_list<Crime>>& database,  const string& start_id, const string& end_id)
{
	//cout<<database[id].
	bool present_in_base = false;
	for (pair<string, forward_list<Crime>> i : database)
	{
		if (i.first >= start_id && i.first <= end_id)
		{
			present_in_base = true;
			for (Crime j : i.second)
			{
				cout << j.get_place() << "\t\n" << j.get_crime() << endl;
			}
		}
	}
	if (!present_in_base)cout << "� ���� ��� ������ ������" << endl;
}