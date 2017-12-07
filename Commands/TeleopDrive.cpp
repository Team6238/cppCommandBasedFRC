#define _GLIBCXX_USE_CXX11_ABI 0
#include "TeleopDrive.h"
#include "../Robot.h"

TeleopDrive::TeleopDrive() {
	Requires(Robot::driveTrain.get());
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void TeleopDrive::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void TeleopDrive::Execute() {
	Robot::driveTrain->Drive(Robot::oi->GetLeftStick(), Robot::oi->GetRightStick());
}

// Make this return true when this Command no longer needs to run execute()
bool TeleopDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleopDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleopDrive::Interrupted() {

}
