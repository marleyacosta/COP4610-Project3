#include <stdio.h>

#include "mycall_test.h"

int main (void)
{
	char * buffer0, buffer1, buffer2, buffer3, buffer4, buffer5, buffer6, buffer7;

        buffer0 = (char*) malloc (255);
        buffer1 = (char*) malloc (1342);
        buffer2 = (char*) malloc (127);
        buffer3 = (char*) malloc (1996);
        buffer4 = (char*) malloc (20182019);
        buffer5 = (char*) malloc (1000000000);
        buffer6 = (char*) malloc (123456789010);
        buffer7 = (char*) malloc (666666666666666);

	      printf("Amount Bytes Free: %d bytes\n", syscall(__NR_get_slob_amt_free));
        printf("Amount Bytes Claimed: %d bytes\n", syscall(__NR_get_slob_amt_claimed));

        return 0;
}
