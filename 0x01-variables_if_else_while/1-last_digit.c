#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

int lastDigit;

lastDigit = n % 10;

if (lastDigit > 5)
{
printf("Last Digit of %d is %d and is greater than 5", n, lastDigit);
}

else if astDigit = 0)
{
printf("Last Digit of %d is 0");
}
}
else if (lastDigit < 6 & != 0)
{
prntf("Last digit of %d is %d", n, lastDigit);
}
return (0);
}
