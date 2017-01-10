
/*
 * ISO C Standard:  7.16  Boolean type and values  <stdbool.h>
 */

#ifndef _STDBOOL_H
#define _STDBOOL_H

/* #define bool unsigned char */
typedef unsigned char bool;
#define true	1
#define false	0

/* Signal that all the definitions are present.  */
#define __bool_true_false_are_defined	1

#endif	/* stdbool.h */
