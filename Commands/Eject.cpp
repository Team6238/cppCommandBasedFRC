#include "Eject.h"
#include "../Robot.h"

Eject::Eject() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::gearPickup.get());
	timer = new frc::Timer();
}

// Called just before this Command runs the first time
void Eject::Initialize() {
	timer->Reset();
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void Eject::Execute() {
	Robot::gearPickup->SetTalon(-0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool Eject::IsFinished() {
	return timer->Get() > 5.0;
}

// Called once after isFinished returns true
void Eject::End() {
	Robot::gearPickup->SetTalon(0);
	timer->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Eject::Interrupted() {

}
