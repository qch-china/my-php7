/**
 * These tool function is for my test and fun ^__^
 */

#ifndef ZEND_MY_TEST_H
#define ZEND_MY_TEST_H

#include <stdio.h>
#include "zend.h"

/**
 * 调试用的日志记录函数，存入my_test/my_test.log中，
 * 该文件不会主动关闭，进程结束时被系统回收
 */
int my_test_log(const char *fmt, ...);

/**
 * 以var_dump形式输出zval变量的值，方便GDB调试
 * 使用：在GDB中，对于zval变量val使用 `call my_p_zval(val)`，
 * 即可以var_dump形式输出变量的值
 */ 
void my_p_zval(zval *val);

#endif

