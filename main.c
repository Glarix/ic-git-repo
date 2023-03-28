#include <time.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    srand(time(NULL));   // Initialization, should only be called once.
    int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
    printf("First rand: %d\n", r);

    srandom(3);
    long a = random();      // Returns a pseudo-random integer between 0 and RAND_MAX.
    printf("First rand: %ld\n", a);
    return 0;
}

