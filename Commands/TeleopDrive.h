#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef TeleopDrive_H
#define TeleopDrive_H

#include <Commands/Command.h>
#include "../OI.h"
#include "wpilib.h"

class TeleopDrive : public frc::Command {
private:
public:
	TeleopDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TeleopDrive_H
