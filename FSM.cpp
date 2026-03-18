#include "FSM.h"
#include "World.h"
#include "InWorld.h"
#include <iostream>

UFSM::UFSM()
{
	Worlds = new UWorld[10];

	
}

UFSM::~UFSM()
{
	delete[] Worlds;
	Worlds = nullptr;

	delete[] InWorlds;
	InWorlds = nullptr;
}

void UFSM::Draw(int Wall, int Floor)
{


}
