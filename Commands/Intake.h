#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef Intake_H
#define Intake_H

#include <Commands/Command.h>
#include "wpilib.h"

class Intake : public Command {
public:
	Intake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Intake_H
