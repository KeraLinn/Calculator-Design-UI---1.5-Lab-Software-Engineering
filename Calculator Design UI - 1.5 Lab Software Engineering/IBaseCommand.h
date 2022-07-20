#pragma once

class IBaseCommand
{
public:
	virtual void Execute() = 0;
	bool didExecute;
	int theFinalResult;
	static int returnTheResults(int results);
};

