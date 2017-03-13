void LCDPreAuton(){
	bLCDBacklight = true;//Turns on backlight for easier viewing
	for(int i = 0; i < 8; i++) {//Cycles 8 times with 0.25 seconds per cycle
		clearLCDLine(0);//Clears any previous writing on line 1
		clearLCDLine(1);//Clears any previous writing on line 2
		displayLCDNumber(0, 7, nAvgBatteryLevel / 1000., 2);//Displays average battery level on line 1
		displayLCDNumber(1, 1, nImmediateBatteryLevel / 1000., 2);//Displays battery 1's charge on line two, left side
		displayLCDNumber(1, 12, BackupBatteryLevel / 1000., 2);//Displays backup battery's charge on line two, right side
		wait1Msec(250);//Cycle time
	}
	clearLCDLine(0);//Clears LCD line 1
	clearLCDLine(1);//Clears LCD line 2
	bLCDBacklight = false;//Turns off backlight
}
