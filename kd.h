/*

    SIGNATURE:
        v0.0.4 - KD Core Library

    INFO:
        Author: Krzysztof "Sejoslaw" Dobrzyński
        Source: https://github.com/Sejoslaw/kdc

    DESCRIPTION:
        - Core library which I use for my personal projects.

    LICENSE:
        'Public License'
        See at the end of the file for more info.

*/

#ifdef KD_IMPLEMENTATION

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                         Libraries                           //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

#ifndef KD_SKIP_STD
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

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                      Global Constants                       //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

#ifndef NULL
    #ifdef __cplusplus
        #define NULL 0
    #else
        #define NULL ((void*)0)
    #endif // __cplusplus
#endif // NULL

typedef unsigned char kd_bool;
#define KD_TRUE 1
#define KD_FALSE 0

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                            Color                            //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

#define KD_COLOR_RED       "\x1B[31m"
#define KD_COLOR_GREEN     "\x1B[32m"
#define KD_COLOR_YELLOW    "\x1B[33m"
#define KD_COLOR_BLUE      "\x1B[34m"
#define KD_COLOR_MAGENTA   "\x1B[35m"
#define KD_COLOR_CYAN      "\x1B[36m"
#define KD_COLOR_WHITE     "\x1B[37m"
#define KD_COLOR_RESET     "\x1B[0m"

#define KD_PRINT_COLOR_CHAR(text, KD_COLOR)    printf(KD_COLOR "%c" KD_COLOR_RESET, text);
#define KD_PRINT_COLOR_TEXT(text, KD_COLOR)    printf(KD_COLOR "%s" KD_COLOR_RESET, text);

/*
    /////////////////////////////////////////////////////////////////
    //                                                             //
    //                                                             //
    //                            Files                            //
    //                                                             //
    //                                                             //
    /////////////////////////////////////////////////////////////////
*/

#define KD_FILE_READ                                "r"
#define KD_FILE_READ_BINARY                         "rb"
#define KD_FILE_WRITE                               "w"
#define KD_FILE_WRITE_BINARY                        "wb"
#define KD_FILE_APPEND                              "a"
#define KD_FILE_APPEND_BINARY                       "ab"
#define KD_FILE_READ_WRITE                          "r+"
#define KD_FILE_READ_WRITE_BINARY                   "r+b"
#define KD_FILE_READ_WRITE_CREATE                   "w+"
#define KD_FILE_READ_WRITE_CREATE_BINARY            "w+b"
#define KD_FILE_READ_WRITE_CREATE_APPEND            "a+"
#define KD_FILE_READ_WRITE_CREATE_APPEND_BINARY     "a+b"

/*
    Opens file in KD_FILE_READ mode.
*/
FILE *kd_file_open_read(const char *path) {
    FILE *file = fopen(path, KD_FILE_READ);
    return file;
}

/*
    Returns file size in bytes.
*/
long kd_file_size(FILE *file) {
    long current_position = ftell(file);
    fseek(file, 0L, SEEK_END);
    long last_position = ftell(file);
    fseek(file, current_position, SEEK_SET);
    return last_position;
}

/*
    Reads file content and stores it in given buffer.
*/
void kd_file_read_text(FILE *file, char *buffer) {
    int index = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        buffer[index] = ch;
        index++;
    }
}

/*
    Reads a content of a file in a given path.
*/
char *kd_file_read_content(const char *path) {
    FILE *file = kd_file_open_read(path);
    long file_size = kd_file_size(file);

    char *buf = (char *) malloc(sizeof(char) * file_size);
    
    kd_file_read_text(file, buf);

    fclose(file);

    return buf;
}

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