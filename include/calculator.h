#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * 计算两个整数的加法
 * @param a 第一个操作数
 * @param b 第二个操作数
 * @return 加法结果
 */
int add(int a, int b);

/**
 * 计算两个整数的减法
 * @param a 被减数
 * @param b 减数
 * @return 减法结果
 */
int subtract(int a, int b);

/**
 * 计算两个整数的乘法
 * @param a 第一个操作数
 * @param b 第二个操作数
 * @return 乘法结果
 */
int multiply(int a, int b);

/**
 * 计算两个整数的除法
 * @param a 被除数
 * @param b 除数
 * @return 除法结果，如果除数为0返回-1
 */
int divide(int a, int b);

#endif /* CALCULATOR_H */
