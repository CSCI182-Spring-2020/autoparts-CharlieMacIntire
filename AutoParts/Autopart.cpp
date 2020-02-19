
#pragma once
#include <iostream>
#include "Autopart.h"
using namespace std;

Autopart::Autopart(int PartNo, string PartDescription, int PartMaker) : BasePart(PartNo)
{
	
	_PartDescription = PartDescription;
	_PartMaker = PartMaker;
	cout << "In AutoPart Constructor: " << _PartDescription << endl;
}



void Autopart::PrintPart()
{
	cout << "\t" << _PartDescription << "\t" << _PartMaker << endl;
}


/*
void Autopart::setPartNo(int partNo)
{
	_PartNo = partNo;
}
*/
