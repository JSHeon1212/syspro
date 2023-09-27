#include <stdio.h>

void copy(char fromp[], char to[]) {
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
