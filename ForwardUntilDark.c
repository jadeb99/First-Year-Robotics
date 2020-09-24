#pragma config(Sensor, S1,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Sensor, S4,     touchSensor,    sensorEV3_Touch)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	//declaring variables
	bool x = true;


	//start while loop
	while (true)
	{
		if (SensorValue(colorSensor) > 4)
		{
			setMotorSpeed(rightMotor, 30);
			setMotorSpeed(leftMotor, 30);
			x = true;
		}//end if

		else
		{
			if (x == true)
			{
				setMotorSpeed(rightMotor, -20);
				setMotorSpeed(leftMotor, -20);
				sleep(90);
				x = false;
			}//end if

			setMotorSpeed(rightMotor, 0);
			setMotorSpeed(leftMotor, 0);
		}//end else
	}//end while
}//end main
