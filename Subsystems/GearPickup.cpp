#include "GearPickup.h"
//#include "wpilib.h"

GearPickup::GearPickup() : Subsystem("ExampleSubsystem") {
	solenoid = new frc::Solenoid(0);
	talon = new CANTalon(17);
	limitSwitch = new frc::DigitalInput(0);
	compressor = new frc::Compressor(18);
}

void GearPickup::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void GearPickup::SetTalon(double speed){
	talon->Set(speed);
}

void GearPickup::SetSolenoid(bool state){
	solenoid->Set(state);
}

bool GearPickup::CheckLimitSwitch(){
	return limitSwitch->Get();
}
