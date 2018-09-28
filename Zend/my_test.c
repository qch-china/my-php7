#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "my_test.h"

void my_test_log(char *content) 
{
    static int init = 0;
    static FILE *fp = NULL;

    if (!init) {
        fp = fopen("my_test/my_test.log", "w");
        if (!fp) {
            printf("open my_test log error");
            exit(1);
        }
        init = 1;
    }

    time_t tt = time(0);
	char str_time[32];
    strftime(str_time, sizeof(str_time), "%Y-%m-%d %H:%M:%S", localtime(&tt));

    fprintf(fp, "[%s] %s\n", str_time, content);
}