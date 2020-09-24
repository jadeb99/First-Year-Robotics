#pragma config(Sensor, S1,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Sensor, S4,     touchSensor,    sensorEV3_Touch)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void dodge()
{
	//turn right
	setMotorSpeed(rightMotor, -35);
	setMotorSpeed(leftMotor, 35);
	sleep(450);
	//go forward
	setMotorSpeed(rightMotor, 30);
	setMotorSpeed(leftMotor, 30);
	sleep(1700);
	//turn left
	setMotorSpeed(rightMotor, 35);
	setMotorSpeed(leftMotor, -35);
	sleep(450);
	//go forward
	setMotorSpeed(rightMotor, 30);
	setMotorSpeed(leftMotor, 30);
	sleep(2500);
	//turn left
	setMotorSpeed(rightMotor, 35);
	setMotorSpeed(leftMotor, -35);
	sleep(450);
	//go forward
	setMotorSpeed(rightMotor, 30);
	setMotorSpeed(leftMotor, 30);
	sleep(1700);
	//turn right
	setMotorSpeed(rightMotor, -35);
	setMotorSpeed(leftMotor, 35);
	sleep(300);
}

task main()
{
	while (true)
	{
		if (SensorValue(sonarSensor) < 15)
		{
			dodge();
		}

		if (SensorValue(colorSensor) > 5)
		{
			setMotorSpeed(rightMotor, 20);
			setMotorSpeed(leftMotor, 40);
		}
		else
		{
			setMotorSpeed(rightMotor, 40);
			setMotorSpeed(leftMotor, 20);
			sleep(120);
		}
		eraseDisplay();
		displayBigTextLine(5, "%d", SensorValue(colorSensor));
	}
}
