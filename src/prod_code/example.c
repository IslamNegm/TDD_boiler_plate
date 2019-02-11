#include "example.h"

/* APIs Implementation */
void say_hi(char* hi_statement ,const char* name)
{
	sprintf(hi_statement, "Hi, %s", name);
}