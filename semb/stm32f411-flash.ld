ENTRY(reset_handler)

MEMORY
{
  FLASH(rx): ORIGIN = 0x08000000, LENGTH = 512K
  SRAM(rwx): ORIGIN = 0x20000000, LENGTH = 128K
}

SECTIONS
{
    .text :
    {
        KEEP(*(.isr_vectores))
        . = ALING(4);
        *(.text)
        . = ALING(4);
        *(.rodata)
        . = ALING(4);
        _la_data = .;
    }> FLASH 

    .data :
    {
        _sdata = .;
        *(.data)
        . = ALING(4);
        _edata = .;

    }> SRAM AT> FLASH

    .bss :
    {
        *(.bss)
        . = ALING(4);
    }> SRAM AT > SRAM
}