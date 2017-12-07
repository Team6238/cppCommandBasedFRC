#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef GearPickup_H
#define GearPickup_H

#include <Commands/Subsystem.h>
#include "wpilib.h"
#include "CANTalon.h"

class GearPickup : public Subsystem {
private:
	Solenoid *solenoid;
	CANTalon *talon;
	DigitalInput *limitSwitch;
	Compressor *compressor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	GearPickup();
	void InitDefaultCommand();
	void SetTalon(double speed);
	bool CheckLimitSwitch();
	void SetSolenoid(bool state);

};

#endif  // GearPickup_H
