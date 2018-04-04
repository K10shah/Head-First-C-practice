#include <stdio.h>
#include <string.h>



//sort of a string array storing names of all tracks
char tracks[][80] = {
	"I left my heart in hollywood",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima"
};

void find_track(char search_for[])
{

	int i;
	for(i = 0; i< 5; i++)
	{
		if(strstr(tracks[i], search_for))
			printf("Tracks %i: '%s'\n", i, tracks[i]);

		puts(tracks[i]);
		printf("%p\n", strstr(tracks[i], search_for));
	}
}


int main()
{
	char search_for[80];

	printf("Search for: ");
	fgets(search_for, 80, stdin);

	find_track(search_for);

	return 0;

}