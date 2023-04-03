#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    time_t now;
    struct tm *clock;
    char time_string[64];

    time(&now);
    clock = localtime(&now);

    strftime(time_string, 64, "%A, %B %d, %Y | %H:%M%n", clock); // see https://en.cppreference.com/w/c/chrono/strftime

    printf("Welcome");
    if (argc > 1)
        printf(", %s", argv[1]);
    printf("!\n%s", time_string);

    return (0);
}