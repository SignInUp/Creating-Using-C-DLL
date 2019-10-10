#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>

typedef double (*function)(int radius, int point_to_check);

int main() {

	HMODULE hm = LoadLibrary(L"MonteCarloPiDLL.dll");

	if (hm == NULL)
		printf("Error");
	else {

		int radius, points_to_check;
		scanf("%d", &radius);
		scanf("%d", &points_to_check);

		function find_pi = (function)GetProcAddress(hm, "find_pi");

		double pi = find_pi(radius, points_to_check);

		printf("%f", pi);
		FreeLibrary(hm);
	}
	return 0;
}