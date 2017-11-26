#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef EXAMPLE_COMMAND_H
#define EXAMPLE_COMMAND_H

#include <Commands/Command.h>

class ExampleCommand: public frc::Command {
public:
	ExampleCommand();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // EXAMPLE_COMMAND_H
