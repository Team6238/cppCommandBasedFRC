#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <wpilib.h>
#include <CANTalon.h>
#include "DriveModule.h"

class DriveTrain : public Subsystem {
private:
	DriveModule *dmLeft, *dmRight;
	RobotDrive myDrive{dmLeft, dmRight};
	Encoder *encoder;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	DriveTrain();
	void InitDefaultCommand();
	void Drive(Joystick *leftStick, Joystick *rightStick);
	double GetEncoderValue();
	void DriveStraight();
};

#endif  // DriveTrain_H
