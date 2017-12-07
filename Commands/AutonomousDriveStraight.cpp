#include "AutonomousDriveStraight.h"

AutonomousDriveStraight::AutonomousDriveStraight(double distance) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());
	temp = distance;
}

// Called just before this Command runs the first time
void AutonomousDriveStraight::Initialize() {
	target = Robot::driveTrain->GetEncoderValue() + temp;

}

// Called repeatedly when this Command is scheduled to run
void AutonomousDriveStraight::Execute() {
	Robot::driveTrain->DriveStraight();
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousDriveStraight::IsFinished() {
	return Robot::driveTrain->GetEncoderValue() < target;
}

// Called once after isFinished returns true
void AutonomousDriveStraight::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousDriveStraight::Interrupted() {

}
