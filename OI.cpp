#define _GLIBCXX_USE_CXX11_ABI 0
#include "OI.h"
#include "wpilib.h"
#include "Commands/Intake.h"
#include "Commands/Eject.h"

OI::OI() {
	// Process operator interface input here.
	intakeButton = new JoystickButton(&rightStick, 0);
	ejectButton = new JoystickButton(&rightStick, 1);
	intakeButton->WhenPressed(new Intake());
	ejectButton->WhenPressed(new Eject());

}

Joystick* OI::GetLeftStick(){
	return &leftStick;
}

Joystick* OI::GetRightStick(){
	return &rightStick;
}
