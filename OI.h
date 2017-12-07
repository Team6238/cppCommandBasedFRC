#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef OI_H
#define OI_H

#include <wpilib.h>
//test
class OI {
private:
	Joystick leftStick{0};
	Joystick rightStick{1};
	JoystickButton* intakeButton;
	JoystickButton* ejectButton;
public:
	OI();
	Joystick* GetLeftStick();
	Joystick* GetRightStick();
};

#endif  // OI_H
