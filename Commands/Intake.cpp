#include "Intake.h"
#include "../Robot.h"

Intake::Intake() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::gearPickup.get());
}

// Called just before this Command runs the first time
void Intake::Initialize() {
	Robot::gearPickup->SetSolenoid(0);
}

// Called repeatedly when this Command is scheduled to run
void Intake::Execute() {
	Robot::gearPickup->SetTalon(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool Intake::IsFinished() {
	return Robot::gearPickup->CheckLimitSwitch();
}

// Called once after isFinished returns true
void Intake::End() {
	Robot::gearPickup->SetTalon(0);
	Robot::gearPickup->SetSolenoid(1);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Intake::Interrupted() {

}
