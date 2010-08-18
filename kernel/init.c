#include "console.h"
#include "intr.h"
#include "mm.h"
#include "multiboot.h"

void init(struct multiboot_info *mb_info)
{
    clrscr();
    kprintf("Hello World!\n");

    pmm_init(mb_info);
    vmm_init();

    init_gdt();
    init_intr();
    init_multitasking(mb_info);
}
