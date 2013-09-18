// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;


class Point{
public:
	int x;
	int y;

	int add(int x, int y)
	{
		return x + y;
	}

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
	return 0;
}

