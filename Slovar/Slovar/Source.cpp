#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<>

using namespace std;
using std::cout;
using std::cin;


void main()
{
	setlocale(LC_ALL, "");
	map<string, vector<string>>  dictionary =
	{
		pair<string,vector<string>>("pain",vector<string>{"����","���������"}),
		pair<string,vector<string>>("love",vector<string>{"������������","������"}),
		pair<string,vector<string>>("space",vector<string>{"������","������������"}),
		pair<string,vector<string>>("void",vector<string>{"�������","�������"}),
		pair<string,vector<string>>("solitude",vector<string>{"�����������","���������"}),
		pair<string,vector<string>>("winter",vector<string>{"�����","����"}),
	};

	for (pair<string, vector<string>>i : dictionary)
	{
		cout << i.first << "\t" << i.second << endl;
	}


}