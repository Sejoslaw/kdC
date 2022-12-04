#define KD_IMPLEMENTATION
#include "../kd.h"

int main(int argc, char *argv[]) {
    char *path = "files/text.txt";
    char *file_content = kd_file_read_content(path);

    printf(file_content);

    return 0;
}