//Driver control modes
void arcade(int move, int rot){
	setDriveL(move + rot);
	setDriveR(move - rot);
}

void tank(int lpwr, int rpwr){
	setDriveL(lpwr);
	setDriveR(rpwr);
}
