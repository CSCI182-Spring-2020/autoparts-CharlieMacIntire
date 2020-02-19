
#pragma once
#include <iostream>
#include "EnginePart.h"
#include "Autopart.h"



using namespace std;

EnginePart::EnginePart(int EngineSpecNo, int PartNo, string PartDescription, int PartMaker) : Autopart(PartMaker, PartDescription, PartNo)
{
	_EngineSpecNo = EngineSpecNo;
}

void EnginePart::PrintPart()
{
	cout << "\t" << _EngineSpecNo << endl;
}

EnginePart:: ~EnginePart()
{
	cout << "In EnginePart Destructor: " << _EngineSpecNo << endl;
}