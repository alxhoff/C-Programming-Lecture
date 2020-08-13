#include <stdio.h>

int main()
{
	for (int j = 0; j < 2; j++) {
		for (int i = 1; i <= 200; i++) {
			if (!(i % 2))
				continue;

			printf("I:%d\n", i);

			if (i == 91)
				break;
		}
	}

    int i = 0;

    while(i < 10){
        printf("I:%d\n", i);
        i++;
    }

    i=0;

    while(1){
        printf("I:%d\n", i);
        i++;
        if(i == 10)
            break;
    }

	return 0;
}
