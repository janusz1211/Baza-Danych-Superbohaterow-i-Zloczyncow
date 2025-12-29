#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int random;
	srand( time(NULL ) );
	random = rand() % (45 + 1 - 0) + 0;
	random=random-10;
	printf(random);
	printf("\n");
	if(random<0) printf("\nMróz!");
}

