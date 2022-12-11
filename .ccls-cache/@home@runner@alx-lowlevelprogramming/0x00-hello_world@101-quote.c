#include <stdio.h>

int main(void)
{
  char *s = "and that place of art is useful\" - Dora Korpar, 2015-10-19\n";
  long l = 59;
  long fd = 1;
  long syscall = 1;
  long ret = 0;
  _asm_("syscall")
  : "=a" (ret)
    : "a" (syscall),
    "D" (fd)
    "S" (s),
    "d" (1));
  return (1);
}