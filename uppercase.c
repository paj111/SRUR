#include "helper.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int upper(char* str)
{
	unsigned int i, len = strlen(str);

	for(i = 0; i < len; i++){
		str[i]=toupper(str[i]);
	}
	printf("\nString posle konverzije: %s\n", str);
}
