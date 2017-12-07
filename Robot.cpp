#define _GLIBCXX_USE_CXX11_ABI 0
#include <Robot.h>
#include <iostream>

std::unique_ptr<OI> Robot::oi = std::make_unique<OI>();
std::shared_ptr<DriveTrain> Robot::driveTrain = std::make_shared<DriveTrain>();
std::shared_ptr<GearPickup> Robot::gearPickup = std::make_shared<GearPickup>();

void Robot::RobotInit(){

}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable
 * chooser code works with the Java SmartDashboard. If you prefer the
 * LabVIEW Dashboard, remove all of the chooser code and uncomment the
 * GetString code to get the auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional commands to the
 * chooser code above (like the commented example) or additional comparisons
 * to the if-else structure below with additional strings & commands.
 */
void Robot::AutonomousInit() {
	autonomousCommand->Start();
}

void Robot::AutonomousPeriodic(){
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit(){
	autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic(){
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic(){
	frc::LiveWindow::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot)
