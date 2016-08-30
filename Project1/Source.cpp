#include <iostream>

float floatSort(float float1, float float2) {
		if (float1 > float2)
			return float2;
		else
			return float1;
	}


int main() {
	float float1 = 0;
	float float2 = 0;
	printf("Please input 2 numbers \n");
	scanf_s("%f %f", &float1, &float2);
	printf("%f", floatSort(float1, float2));
	system("pause");
}