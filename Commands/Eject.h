#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef Eject_H
#define Eject_H

#include <Commands/Command.h>
#include "wpilib.h"
#include <Timer.h>

class Eject : public Command {
private:
	Timer *timer;
public:
	Eject();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Eject_H
