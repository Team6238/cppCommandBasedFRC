#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef AutonomousDriveStraight_H
#define AutonomousDriveStraight_H

#include <Commands/Command.h>
#include "wpilib.h"
#include "../Robot.h"

class AutonomousDriveStraight : public Command{
private:
	double temp = 0, target = 0;
public:
	AutonomousDriveStraight(double distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // AutonomousDriveStraight_H
