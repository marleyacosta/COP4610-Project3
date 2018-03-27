#include <stdio.h>
#include <stdlib.h>

#include "mycall_test.h"

int main (void)
{


        char *buffer0;
	buffer0 = (char*) malloc (255);
        char *buffer1;
	buffer1 = (char*) malloc (1342);
        char *buffer2;
	buffer2 = (char*) malloc (127);
        char *buffer3;
	buffer3 = (char*) malloc (1996);
        char *buffer4;
	buffer4 = (char*) malloc (20182019);
        char *buffer5;
	buffer5 = (char*) malloc (1000000000);
        char *buffer6;
	buffer6 = (char*) malloc (1234567890);
        char *buffer7;
	buffer7 = (char*) malloc (666666666);

	printf("Amount Bytes Free: %ld bytes\n", syscall(__NR_get_slob_amt_free));
        printf("Amount Bytes Claimed: %ld bytes\n", syscall(__NR_get_slob_amt_claimed));

        return 0;
}
