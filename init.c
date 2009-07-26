#include "console.h"
#include "intr.h"

void init(void)
{
    clrscr();
    kprintf("Hello World!\n");

    init_gdt();
    init_intr();
    init_multitasking();
}
