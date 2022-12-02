/*

    SIGNATURE:
        v0.0.1 - KD Core Library

    INFO:
        Author: Krzysztof "Sejoslaw" Dobrzyński
        Source: https://github.com/Sejoslaw/kdc

    DESCRIPTION:
        - Core library which I use for my personal projects.

    LICENSE:
        'Public License'
        See at the end of the file for more info.

    HISTORY:
        0.0.1 - Initial version; +includes; +file constants;

*/

#ifdef KD_IMPLEMENTATION

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#ifndef KD_SKIP_STD
#define KD_SKIP_STD

#include <assert.h>     // Contains the assert macro, used to assist with detecting logical errors and other types of bugs in debugging versions of a program.
#include <complex.h>    // A set of functions for manipulating complex numbers.
#include <ctype.h>      // Defines set of functions used to classify characters by their types or to convert between upper and lower case in a way that is independent of the used character set (typically ASCII or one of its extensions, although implementations utilizing EBCDIC are also known).
#include <math.h>       // Defines common mathematical functions.
#include <stdarg.h>     // For accessing a varying number of arguments passed to functions.
#include <stddef.h>     // Defines several useful types and macros.
#include <stdio.h>      // Defines core input and output functions.
#include <stdlib.h>     // Defines numeric conversion functions, pseudo-random numbers generation functions, memory allocation, process control functions.
#include <string.h>     // Defines string-handling functions.
#include <time.h>       // Defines date- and time-handling functions.

#endif // KD_SKIP_STD

typedef unsigned char kd_bool;
#define KD_TRUE 1
#define KD_FALSE 0

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                            Files                            //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

#define KD_FILE_READ "r"
#define KD_FILE_READ_BINARY "rb"
#define KD_FILE_WRITE "w"
#define KD_FILE_WRITE_BINARY "wb"
#define KD_FILE_APPEND "a"
#define KD_FILE_APPEND_BINARY "ab"
#define KD_FILE_READ_WRITE "r+"
#define KD_FILE_READ_WRITE_BINARY "r+b"
#define KD_FILE_READ_WRITE_CREATE "w+"
#define KD_FILE_READ_WRITE_CREATE_BINARY "w+b"
#define KD_FILE_READ_WRITE_CREATE_APPEND "a+"
#define KD_FILE_READ_WRITE_CREATE_APPEND_BINARY "a+b"

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                         Collections                         //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                            LINQ                             //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                           Stream                            //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                           String                            //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // KD_IMPLEMENTATION

/*

    This software is dual-licensed to the public domain and under the following
    license: you are granted a perpetual, irrevocable license to copy, modify,
    publish, and distribute this file as you see fit.

*/