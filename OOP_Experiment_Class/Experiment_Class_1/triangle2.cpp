bool isTriangle2(float a, float b, float c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	else {
		return false;
	}
}