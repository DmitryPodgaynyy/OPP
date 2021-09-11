#pragma once
#include <string>
using namespace std;
struct povar
{
	zakaz b;
	string rank;
};
struct oficiant
{
	posetitel c;
	zakaz b;
	string rank;
};
struct zakaz
{
	string bludo;
	int price;
	int time;
};
struct posetitel
{
	oficiant a;
	zakaz b;
};
struct stolik
{
	int num;
	int kol;
	string status;
	int sost;
};