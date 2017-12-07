#define _GLIBCXX_USE_CXX11_ABI 0
#include "DriveTrain.h"
#include "Commands/TeleopDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	dmLeft = new DriveModule(11, 12, 13);
	dmRight = new DriveModule(14, 15, 16);
	encoder = new Encoder(0, 1, false, Encoder::EncodingType::k4X);
	encoder->Reset();
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TeleopDrive());
}

void DriveTrain::Drive(Joystick *leftStick, Joystick *rightStick){
	myDrive.TankDrive(leftStick, rightStick, 1);
}

double DriveTrain::GetEncoderValue(){
	return encoder->GetDistance();
}
void DriveTrain::DriveStraight(){
	myDrive.Drive(0.5, 0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
