#define KD_IMPLEMENTATION
#include "../kd.h"

int main(int argc, char *argv[]) {
    kd_list_t *list = kd_list_create();

    list->add(list, 4);

    return 0;
}