#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - a function that checks if a file is an ELF file.
 * @e_ident: the name of the file containing the ELF magic numbers
 *
 * Description: exit code 98 if the file is not an ELF file.
 */
void c
