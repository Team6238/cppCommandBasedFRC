#include "DriveModule.h"

DriveModule::DriveModule(int front, int mid, int back){
	f = new CANTalon(front);
	m = new CANTalon(mid);
	b = new CANTalon(back);
}

DriveModule::~DriveModule(){
	f->~CANTalon();
	m->~CANTalon();
	b->~CANTalon();
}

CANTalon *f, *m, *b;

void DriveModule::PIDWrite(double output){

}
void DriveModule::Set(double speed){
	f->Set(speed);
	m->Set(speed);
	b->Set(speed);
}

double DriveModule::Get() const{
	return f->Get();
}

void DriveModule::SetInverted(bool i){
	f->SetInverted(i);
	m->SetInverted(i);
	b->SetInverted(i);
}

void DriveModule::Disable(){
	f->Disable();
	m->Disable();
	b->Disable();
}

bool DriveModule::GetInverted() const{
	return f->GetInverted();
}

void DriveModule::StopMotor(){
	f->StopMotor();
	m->StopMotor();
	b->StopMotor();
}

