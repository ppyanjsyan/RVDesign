OUTPUT_ARCH( "riscv" )
OUTPUT_FORMAT("elf32-littleriscv")
ENTRY(_start)

SECTIONS
{
  . = 0x00000000;
  .text : { *(.text) }
  _end = .;
}
