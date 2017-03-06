void rightAuton(){
	vroomPush(127, 127, 500);//Claw out
	vroomPush(-127, -127, 500);// ^
	vroomPush(127, 127, 1700);//Shoves preload under fence
	vroomPush(-127, -127, 1500);//Back to original position
	vroomPush(127, -127, 300);//Turns toward star on left of robit
	vroomPush(127, 127, 450);//forward to get star
	vroomPush(-127, 127, 400);//turns back towards fence
	vroomPush(127, 127, 1700);//forward to shove star under fence
	for(int p = 0; p < 2; p++){//shoves star under fence 4 times
		vroomPush(-127, -127, 500);// ^
		vroomPush(127, 127, 500);// ^
	}
	vroomPush(-127, -127, 1700);//Returns to original position
	vroomPush(-127, 127, 400);//Turns towards set of three stars to get any that the claw-bot missed
	vroomPush(127, 127, 2750);//forward to grab ^ stars
	vroomPush(127, -127, 300);//turns towards fence on other side of field
	vroomPush(127, 127, 1700);//Forward to shove stars under fence
	for(int q = 0; q < 4; q++){//Shoves star(s) under fence
		vroomPush(-127, -127, 500);//  ^
		vroomPush(127, 127, 500);// ^
	}
	vroomPush(-127, -127, 1000);//Back to far zone for driver control
}
