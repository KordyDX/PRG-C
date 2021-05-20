#include <stdio.h>

int main(){
	for (int i = 0; i <= 50; i++)
		if (i % 5 == 0)
			printf(i != 50 ? "%i-" : "%i\n", i);

return 0;
}