#include <stdio.h>

int main() {
	float squareLength;

	printf("Enter length of square:");
	scanf("%f", &squareLength);

  float circumferenceOfSquare = 4 * squareLength;

	printf("Circumference of square is: %f ", circumferenceOfSquare);
}
