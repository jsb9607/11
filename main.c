#include <stdio.h>
#include <stdlib.h>

char *proverb = "All that glisters is not gold.";

void setPointer(char **q)
{
	*q =  proverb;
}

int main(int argc, char *argv[]) {

	char *p = "zzz";
	setPointer(&p);
	printf("%s\n", p);

	return 0;
}


