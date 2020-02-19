#pragma once
#include <iostream>
#include "Autopart.h"



using namespace std;

class EnginePart : Autopart{


private:
	int _EngineSpecNo = 0;

public:
	
	EnginePart(int, int, string, int);

	virtual void PrintPart();

	virtual ~EnginePart();

};

