#include <stdio.h>
#include "uwip/uwip.h"

void console_log(char *log)
{
    printf("%s", log);
}

int main()
{
    printf("UWIP ModBus RTU Example code...\n");

    uwip_t uwip;
    UWIP_Init(&uwip, console_log);

    return 0;
}
