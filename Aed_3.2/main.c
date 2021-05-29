#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MASS_SIZE 50

int main() {
	//setlocale(LC_ALL, "RUS");
	FILE* city;
	errno_t err = fopen_s(&city, "cities.txt", "r");
	if (err != 0) {
		perror(err);
		_fcloseall();
		return err;
	}
	char c = 0, prev = '\n';
	int bigs[MASS_SIZE] = { 0 }, smalls[MASS_SIZE] = { 0 }; 
	while ((c = fgetc(city)) != EOF) {
		if (prev == '\n')
			++bigs[c - 'A' + 1];
		if (c == '\n')
			++smalls[prev - 'a' + 1];
		prev = c;
	}
	++smalls[prev - 'a' + 1];
	int sum = 0;
	for (int i = 1; i < MASS_SIZE; i++) {
		sum += abs(bigs[i] - smalls[i]);
	}
	if (sum == 2)
		printf("YES\n");
	else
		printf("NO\n");
	_fcloseall();
	return 0;
}