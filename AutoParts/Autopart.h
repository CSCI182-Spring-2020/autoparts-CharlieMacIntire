#pragma once
#include <iostream>
#include "BasePart.h"
using namespace std;

class Autopart: BasePart{

private:
	string _PartDescription = "";
	int _PartMaker = 0;

public:

	Autopart(int, string, int);
	//void setPartNo(int);
	virtual void PrintPart();

};

