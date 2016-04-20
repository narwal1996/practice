/*
 * Sanfoundry.com Memory Leak Program – India Internship Bangalore
 * Author: Manish Kumar Bhojasia, Location: Bangalore, India
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KB1     1024
#define MEMSIZE (4 * KB1)

char *string = "IDENTIFY 10 ISSUES IN THIS MEMLEAK PROGRAM";
char *gstring = "IDENTIFY 10 ISSUES IN THIS MEMLEAK PROGRAM";
char *gptr;
int num;

char * f1_alloc(void);
char * f2_copyme(void);
void   f3_free(char *);

main()
{
    srand((int)getpid());
    while (1) {
        gptr = f1_alloc();
        strcpy(gptr, string);
        f2_copyme();
        f3_free(gptr);
    }
}

char *f1_alloc()
{
    return (malloc(MEMSIZE));
}
char *f2_copyme()
{
    static int len, i = 0;
    char *s;

    len = strlen(string);
    s = (char *)malloc(len);
    strncpy(s, string, len);
    i++;
    if (!(i % MEMSIZE))
        printf("i=%d, %s\n", i, s);
}

void f3_free(char *p)
{
    num = rand() % 3;
    if (!num)
        free(p);
}
