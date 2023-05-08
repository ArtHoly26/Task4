#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//ДЗ.
//Дан файл с набором команд, каждая команда на отдельной строке.
//Используемые команды :
//ADD, SUB, MUL, DIV
//У каждой команды через пробел указаны два числа.
//Необходимо написать программу, которая считывает команды из файла и вычисляет.Результат вычислений выводиться на экран.
//Пример файла :
//ADD 5 10
//SUB 5 10
//MUL 5 10
//DIV 5 10

void command()
{
	string path = "Command.txt";
	ifstream read;
	read.open(path,iostream:: in);
	if (!read.is_open()) cout << "Ошибка чтения файла: " << endl;
	else
	{
		int buffer, buffer2;
		string line;
		while (!read.eof())
		{
			read >> line;
			cout << line;
			if (line == "ADD")
			{
				read >> buffer;
				read >> buffer2;
				cout<<"\t" << buffer + buffer2 << endl;	
			}
			if (line == "SUB")
			{
				read >> buffer;
				read >> buffer2;
				cout<<"\t" << buffer - buffer2 << endl;
			}
			if (line == "MUL")
			{
				read >> buffer;
				read >> buffer2;
				cout<<"\t" << buffer * buffer2 << endl;
			}
			if (line == "DIV")
			{
				read >> buffer;
				read >> buffer2;
				cout<<"\t" << buffer / buffer2 << endl;
			}
		}

	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	command();	
}