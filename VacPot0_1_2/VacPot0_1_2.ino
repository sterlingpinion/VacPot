/*
    Vacuum-Transfer Potting Control.
    Version0.1
    Ryan Sharp
*/

//Variables:
int Pext; //External Pressure
int Pint; //Internal Pressure
int Ptar; //Target Pressure
int Pdel; //Pint-Ptar Delta
int Pset; //Pressure Differential Setting
int Tset; //Time Interval Setting

//Boolean States:
boolean ModeStandby = true; //Standby Mode (Default Standby)
boolean ModeOperation = false; //Operation Mode (Default Eq. Mode)
boolean RampBegun = false; //Pressure Ramp Has Begun (Default No)
boolean RampFinish = false; //Pressure Ramp Has Finished (Default No)

//Inputs [switch]:
int SwStandby = 5; // Standby Switch Dig.5
int SwMode = 6;    // Mode Switch Dig.6
//Inputs [potentiometer]:
int PotFlow = 0; // Flow Control Potentiometer An.0
int PotPset = 3; //Pset Potentiometer An.3
int PotTset = 4; //Tset Potentiometer An.4
int PotPext = 1; //Pext Sensor, Potentiometer During Version0 Prototype
int PotPint = 2; //Pint Sensor, Potentiometer During Version0 Prototype

//Outputs [LED]:
int LedStat = 13; //Status Indicator Light Dig.13
int LedYel = 7; //Status Indicator Yellow Dig.7
int LedGrn = 8; //Status Indicator Green Dig.8
//Outputs [Servo]:
int ServFlow = 9; //Servo Flow Valve PWM Dig.9
int ServVent = 10; //Servo Vent Valve PWM Dig.10
int ServPres = 11; //Servo Nitrogen Valve PWM Dig.11


void setup() {
  // put your setup code here, to run once:
pinMode(SwStandby, INPUT);
pinMode(SwMode, INPUT);
pinMode(PotFlow, INPUT);
pinMode(PotPext, INPUT);
pinMode(PotPint, INPUT);

pinMode(LedStat, OUTPUT);
pinMode(LedYel, OUTPUT);
pinMode(LedGrn, OUTPUT);
pinMode(ServFlow, OUTPUT);
pinMode(ServVent, OUTPUT);
pinMode(ServPres, OUTPUT);

Pset = 50;
Tset = 60;

//Startup Light Check
LightCheck();

}

void loop() {
  // put your main code here, to run repeatedly:

}

void LightCheck(){
  digitalWrite(LedStat, HIGH);
  delay(500);
  digitalWrite(LedYel, HIGH);
  delay(500);
  digitalWrite(LedGrn, HIGH);
  delay(500);
  digitalWrite(LedStat, LOW);
  digitalWrite(LedYel, LOW);
  digitalWrite(LedGrn, LOW);
  delay(250);
  digitalWrite(LedStat, HIGH);
  digitalWrite(LedYel, HIGH);
  digitalWrite(LedGrn, HIGH);
  delay(250);
  digitalWrite(LedStat, LOW);
  digitalWrite(LedYel, LOW);
  digitalWrite(LedGrn, LOW);
  delay(250);
  digitalWrite(LedStat, HIGH);
  digitalWrite(LedYel, HIGH);
  digitalWrite(LedGrn, HIGH);
  delay(250);
  digitalWrite(LedStat, LOW);
  digitalWrite(LedYel, LOW);
  digitalWrite(LedGrn, LOW);
}
