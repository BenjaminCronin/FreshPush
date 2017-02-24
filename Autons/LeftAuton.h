//Auton Functions
void vroomPush(int pwrL, int pwrR, int time){//Goodbye Lennie's amazing code
	setDriveL(pwrL);
	setDriveR(pwrR);
	wait1Msec(time);
	setDriveL(0);
	setDriveR(0);
	wait1Msec(20);
}



void leftAuton(){
	vroomPush(127, 127, 500);//Claw out
	vroomPush(-127, -127, 500);// ^
	vroomPush(127, 127, 1700);//Shoves preload under fence
	vroomPush(-127, -127, 1650);//Back to original position
	vroomPush(-127, 127, 250);//Turns toward star on left of robit
	vroomPush(127, 127, 350);//forward to get star
	vroomPush(127, -127, 250);//turns back towards fence
	vroomPush(127, 127, 1700);//forward to shove star under fence
	for(int p = 0; p < 4; p++){//shoves star under fence 4 times
		vroomPush(-127, -127, 500);// ^
		vroomPush(127, 127, 500);// ^
	}
	vroomPush(-127, 127, 400);//Turns towards set of three stars to get any that the claw-bot missed
	vroomPush(127, 127, 2000);//forward to grab ^ stars
	vroomPush(-127, 127, 250);//turns towards fence on other side of field
	vroomPush(127, 127, 1700);//Forward to shove stars under fence
	for(int q = 0; q < 4; q++){
		vroomPush(-127, -127, 500);
		vroomPush(127, 127, 500);
	}
	vroomPush(-127, -127, 1000);
}
