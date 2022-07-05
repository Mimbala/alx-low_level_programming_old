#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

/**
 * FUNCTION_LIKE_MACRO - function-like macro ABS(x) that computes
 * the absolute value of a number x.
 * @x: Number to compute
 */

#define ABS(x) (((x) < 0) ? (-x) : (x))

#endit

