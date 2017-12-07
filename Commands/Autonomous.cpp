#define _GLIBCXX_USE_CXX11_ABI 0
#include "Autonomous.h"
#include "AutonomousDriveStraight.h"
#include <iostream>

Autonomous::Autonomous(): CommandGroup("Autonomous"){
	AddSequential(new AutonomousDriveStraight(5.0));
}

