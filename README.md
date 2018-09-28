The PHP Interpreter
===================

本项目基于PHP 7.2.9，主要是本人在学习PHP7源码过程中，为方便学习而进行的一些修改，不保证稳定性，不要在生产环境中使用该版本。

## 主要改动如下：

1. 增加了zend/mytest.h zend/mytest.c，存放一些本项目用到的helper函数
2. 记录所有opcode操作所对应的opcode名字（主要修改了zend/zend_vm_execute.h）

## 备注

1. 本项目的新增的日志，如无特殊说明的话，都是调用my_test_log函数进行写日志操作，代码: zend/my_test.c