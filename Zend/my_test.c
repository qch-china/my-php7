#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "ext/standard/html.h"
#include "zend_smart_str.h"
#include "zend_exceptions.h"

// php json ext 的头文件 
#include "ext/json/php_json.h"
#include "ext/json/php_json_encoder.h"
#include "ext/json/php_json_parser.h"


#include "my_test.h"

#define BUFFER_MAX_LEN 10240

int my_test_log(const char *fmt, ...) 
{
    static int init = 0;
    static FILE *fp = NULL;
	va_list ap;
	int len = 0;

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

    va_start(ap, fmt);
    len += fprintf(fp, "[%s] ", str_time);
	len += vfprintf(fp, fmt, ap);
	len += fprintf(fp, "\n");
    va_end(ap);
	
	return len;
}

void my_p_zval(zval *val)
{
    php_var_dump(val, 1);
}