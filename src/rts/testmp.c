
#include <u.h>
#include <libc.h>
#include <mp.h>

void
main (int, char* [])
{
    mpint *m;
    char *s = "12\0";
    char *r = nil;

    print("testmp starting\n");
    m = mpnew(0);
    strtomp(s, nil, 10, m);
    fmtinstall('B',mpfmt);
    print("mpint is %B\n",m);
    print("mpint in ascii is %s\n",mptoa(m, 10, r, 0));
    free(r);
    print("mpint in hex is %s\n",mptoa(m, 16, r, 0));
    mpfree(m);
    print("testmp exiting\n");
    exits(nil);
}
