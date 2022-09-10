#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

lastDigit = n % 10;

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}

else if (lastDigit = 0)
{
printf("Last digit of %d is 0\n");
}
}
else if (lastDigit < 6 && lastDigit != 0);
{
prntf("Last digit of %d is %d", n, lastDigit);
}
return (0);
}
