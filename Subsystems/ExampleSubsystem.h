#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ExampleSubsystem_H
#define ExampleSubsystem_H

#include <Commands/Subsystem.h>

class ExampleSubsystem : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	ExampleSubsystem();
	void InitDefaultCommand();
};

#endif  // ExampleSubsystem_H
