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

void main()
{
	setlocale(LC_ALL, "");
	map<string, forward_list<Crime>>database =
	{
		pair<string,forward_list<Crime>>("BI6666BC",{Crime("��� �� ����","������ � ������ ������� ������, � ���������� ���� ����� ������ ������ ������,� ������� �����")}),
		pair<string,forward_list<Crime>>("BI4567BC", {Crime("McDonalds", "������ � ���� ���")}),
		pair<string,forward_list<Crime>>("BT2134CI", {Crime("��� �� ����", "���� ����� ����� ������")})

	};
	do
	{
	char key;
	cout << "\n1. ����� ���� ����;" << endl;
	cout << "2. ����� ���������� �� ������;" << endl;
	cout << "3. ����� ���������� �� ��������� �������;" << endl;
	cout << "4. ���������� ������;" << endl;
	cout << "�������� ��������: "; cin >> key;
		switch (key)
		{
		case'1':print(database); break;
		case'2':
		{
			string id;
			cout << "������� ����� ����������: "; cin >> id;
			print(database, id);
		}
		break;
		}
	} while (getch()!=27);//��� ���� ����� ���������� conio.h !
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