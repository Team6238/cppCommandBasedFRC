#define _GLIBCXX_USE_CXX11_ABI 0
#include "ExampleSubsystem.h"

ExampleSubsystem::ExampleSubsystem() : frc::Subsystem("ExampleSubsystem") {

}

void ExampleSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
