#include <stdio.h>


void skip(char *msg)
{
	printf("%c\n", *(msg + 6));
}
int main()
{

char *msg_from_amy = "Don't call me";
skip(msg_from_amy);
}