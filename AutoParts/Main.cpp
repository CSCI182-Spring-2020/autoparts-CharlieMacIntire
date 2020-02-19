// AutoParts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma once
#include <iostream>

#include "Autopart.h"
#include "EnginePart.h"


int main()
{
	
	
	// Create part on the stack 
	EnginePart part(5, 7, "Steering Wheel", 243);
	part.PrintPart();

	//Create part on the heap 
	EnginePart* pHeapPart = new EnginePart(6, 8, "Gear Shift", 500);
	pHeapPart->PrintPart();
	delete pHeapPart;
	
}
