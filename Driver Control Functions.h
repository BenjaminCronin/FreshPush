//USER CONTROL FUNCTIONS
void setDriveL(int pwr) {
	motor[LFPrimary] =
		motor[LMPrimary] =
		motor[LBPrimary] =
		motor[LFSecondary] =
		motor[LBSecondary] =
	pwr;
}

void setDriveR(int pwr) {
	motor[RFPrimary] =
		motor[RMPrimary] =
		motor[RBPrimary] =
		motor[RFSecondary] =
		motor[RBSecondary] =
	pwr;
}
