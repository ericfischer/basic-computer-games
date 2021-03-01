#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void center(const char *s) {
	size_t indent = (72 - strlen(s)) / 2;
	for (size_t i = 0; i < indent; i++) {
		putchar(' ');
	}
	printf("%s\n", s);
}

int main(int argc, char **argv) {
	center("SINE WAVE");
	center("Creative Computing  Morristown, New Jersey");
	printf("\n\n\n\n\n");

	/* original by David Ahl */

	int b = 0;
	for (double t = 0; t < 40; t += 0.250) {
		size_t a = floor(26 + 25 * sin(t));
		for (size_t i = 0; i < a; i++) {
			putchar(' ');
		}

		if (b == 0) {
			printf("Creative\n");
		} else {
			printf("Computing\n");
		}

		b = !b;
	}

	return EXIT_SUCCESS;
}
