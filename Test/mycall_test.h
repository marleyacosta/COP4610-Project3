#include <linux/unistd.h>

// Need to change numbers depending on the kernel

#define __NR_get_slob_amt_claimed 343

#define __NR_get_slob_amt_free 344

extern long int syscall (long int__sysno, ...) __THROW;
