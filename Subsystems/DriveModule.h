#ifndef DRIVEMODULE_H_
#define DRIVEMODULE_H_

#include "wpilib.h"
#include "CANTalon.h"

namespace frc{
class DriveModule : public SpeedController{
public:
	DriveModule(int front, int mid, int back);
	virtual ~DriveModule();
private:
	CANTalon *f, *m, *b;
	void PIDWrite(double output);
	void Set(double speed);
	double Get() const override;
	void SetInverted(bool i);
	void Disable();
	bool GetInverted() const override;
	void StopMotor();
};
}


#endif /* DRIVEMODULE_H_ */
