#define global_variable static

int clamp(int min, int val, int max) {
	if (val < min) { return min; }
	if (val > max) { return max; }
	else { return val; }
}