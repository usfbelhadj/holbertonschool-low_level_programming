#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
printf ("Your number is positive %d.\n", n);
}
else if (n==0){
print ("Your number is Zero %d.\n", n);
}
else {
print ("Your number is negative %d.\n", n);
}
	return (0);
}
