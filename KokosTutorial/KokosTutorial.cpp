// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

class Point{
public:
	int x;
	int y;

	int add()
	{
		return x + y;
	}

};

enum Result
{
    SUCCESS = 0,
    ERROR_OPENING_FILE = -1,
    ERROR_READING_FILE = -2,
    ERROR_PARSING_FILE = -3,
};

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 5;
	cout<< " a: " << a << endl;

	int *p = &a;
	*p = 666;
	cout << " a: " << a << endl;
	
	(*p) =45;
	cout << " a: " << a << endl;
	
	cout << "-------------" << endl;
	Point po;
	po.x = 6;
	po.y = 3;
	cout << " po: " << po.add() << endl;

	Point* p2 = &po;
	// p2->     =       (*p2).
	cout << " po: " << p2->add() << endl;

	char fff;
	cin >> fff;
	return SUCCESS;
}

