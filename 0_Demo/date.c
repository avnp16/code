#include <stdio.h>
#include <time.h>

void main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Date: %02d-%02d-%02d\n", tm.tm_mday + 20, tm.tm_mon + 1, tm.tm_year + 1900);
}