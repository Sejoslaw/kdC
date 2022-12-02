#define KD_IMPLEMENTATION
#include "../kd.h"

int main(int argc, char *argv[]) {
    FILE *file = kd_file_open_read("files/text.txt");

    // TODO: add kd_file_read_lines; kd_file_full_path; kd_file_is_directory

    long file_size = kd_file_size(file);

    return 0;
}