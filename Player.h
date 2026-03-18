#pragma once
#include "Actor.h"


class APlayer: public AActor
{
public:
	APlayer();
	~APlayer();


	int X;
	int Y;
	int Mesh;

	void Move();

};
