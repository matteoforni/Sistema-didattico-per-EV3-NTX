#pragma config(Sensor, S1,     distanceSensor, sensorSONAR)
#pragma config(Sensor, S3,     touch,          sensorTouch)
#pragma config(Sensor, S4,     sound,          sensorSoundDB)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "wait.h";

void testTouch(int port, int motorPort){
		motor[motorPort] = 20;
		waitTouch(port);
		writeDebugStreamLine("ciao");
}

void testRotations(int port, int rot, int speed){
		waitRotations(port, rot, speed);
}

void testDegrees(int port, int deg, int speed){
		waitDegrees(port, deg, speed);
}

void testTime(long millis){
		motor[motorA] = 20;
		waitTime(millis);
}

void testSound(int port, int threshold){
		waitSound(port, threshold);
}

void testDistance(int port, int dist)
{
	while(waitDistance(port, dist))
	{
		motor[motorA] = 20;
	}
}

task main()
{
	/*
	//wait rotations
	testRotations(0, 1, 30);

	//wait degrees
	testDegrees(0, 360, 20);

	//wait time
	testTime(1000);

	//wait distance
	testDistance(distanceSensor, 20);*/

	//wait touch
	testTouch(touch, motorA);


}

/**
	 * waitTouch
	 * waitLight
	 * waitDistance		funziona
	 * waitSound
	 * waitTime				funziona
	 * waitRotations 	funziona
	 * waitDegrees 		funziona
	 */
