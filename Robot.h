#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ROBOT_H_
#define ROBOT_H_

#include <memory>

#include <Commands/Command.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>

#include <Commands/Autonomous.h>
#include <OI.h>
#include <Subsystems/DriveTrain.h>
#include <Subsystems/GearPickup.h>

class Robot: public frc::IterativeRobot{
public:
	static std::unique_ptr<OI>oi;
	static std::shared_ptr<DriveTrain>driveTrain;
	static std::shared_ptr<GearPickup>gearPickup;

private:
	Autonomous* autonomousCommand;
	frc::LiveWindow* lw = frc::LiveWindow::GetInstance();

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
};

#endif  // ROBOT_H_
