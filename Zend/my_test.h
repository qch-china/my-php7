/**
 * These tool function is for my test and fun ^__^
 */

#ifndef ZEND_MY_TEST_H
#define ZEND_MY_TEST_H

#include <stdio.h>

/**
 * 调试用的日志记录函数，存入my_test/my_test.log中，
 * 该文件不会主动关闭，进程结束时被系统回收
 */
void write_my_test_log(char *content);

#endif

