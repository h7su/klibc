#include <stdio.h>
#include <stdbool.h>

void rewind(FILE *f)
{
	if (!fseek(f, 0, SEEK_SET))
		f->_io_error = false;
}
