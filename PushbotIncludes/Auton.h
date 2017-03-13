//Auton Functions
void vroomPush(int pwrL, int pwrR, int time){//Goodbye Lennie's amazing code
	setDriveL(pwrL);
	setDriveR(pwrR - 35);
	wait1Msec(time);
	setDriveL(0);
	setDriveR(0);
	wait1Msec(20);
}


void Auton(){
	vroomPush(127, 127, 500);//Claw out
	vroomPush(-127, -127, 500);// ^
	vroomPush(127, 127, 2000);//Shoves preload under fence
	vroomPush(-127, -127, 1000);//Back to original position
}
