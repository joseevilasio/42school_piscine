#include <unistd.h>

void alpha_mirror(char *str) {
    while (*str) {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            *str = (*str <= 'Z') ? 'A' + 'Z' - *str : 'a' + 'z' - *str;
        }
        write(1, str++, 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
        alpha_mirror(argv[1]);
    }
    write(1, "\n", 1);

    return 0;
}
