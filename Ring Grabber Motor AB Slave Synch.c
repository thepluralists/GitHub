#pragma config(Sensor, S1,     touch1,         sensorTouch)
#pragma config(Sensor, S2,     touch2,         sensorTouch)

task main()
{
	nSyncedMotors = synchAB;
	nSyncedTurnRatio = 100;

	if (SensorValue(touch1) == 1 && SensorValue(touch2) == 0)
	{
			motor[motorA] = 100;
	}

	if (SensorValue(touch1) == 0 && SensorValue(touch2) == 1)
	{
			motor[motorA] = -100;
	}

	else
	{
			motor[motorA] = 0;
	}
}
