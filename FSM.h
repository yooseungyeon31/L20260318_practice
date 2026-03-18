#pragma once

class UWorld;
class UInWorld;


class UFSM
{
public:
	UFSM();
	~UFSM();

	UWorld* Worlds;
	UInWorld* InWorlds;

	void Draw(int Wall, int Floor);
};

