void LCDPreAuton(){
	bLCDBacklight = true;
	for(int i = 0; i < 24; i++) {
		clearLCDLine(0);
		displayLCDNumber(0, 1, nAvgBatteryLevel / 1000., 2);
		wait1Msec(250);
  	clearLCDLine(1);
    displayLCDString(1, i % 17, "GO PUSHBOT");
	}
}
