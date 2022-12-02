#define KD_IMPLEMENTATION
#include "../kd.h"

int main(int argc, char *argv[]) {
    KD_PRINT_COLOR_TEXT("Checking color - RED \n", KD_COLOR_RED);
    KD_PRINT_COLOR_TEXT("Checking color - GREEN \n", KD_COLOR_GREEN);
    KD_PRINT_COLOR_TEXT("Checking color - YELLOW \n", KD_COLOR_YELLOW);
    KD_PRINT_COLOR_TEXT("Checking color - BLUE \n", KD_COLOR_BLUE);
    KD_PRINT_COLOR_TEXT("Checking color - MAGENTA \n", KD_COLOR_MAGENTA);
    KD_PRINT_COLOR_TEXT("Checking color - CYAN \n", KD_COLOR_CYAN);
    KD_PRINT_COLOR_TEXT("Checking color - WHITE \n", KD_COLOR_WHITE);

    return 0;
}