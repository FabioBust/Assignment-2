void setLength(int input, int* length) {
	if (input >= 0 && input < 100) {
		*length = input;
	}
}

void setWidth(int input, int* width) {
	if (input > 0 && input <= 100) {
		*width = input;
	}
}

int getPerimeter(int* length, int* width) {
	int perimeter = 2 * (*length + *width);
	return perimeter;
}

int getArea(int* length, int* width) {
	int area = *length * *width;
	return area;
}