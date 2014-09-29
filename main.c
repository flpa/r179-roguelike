#include <stdio.h>
#include <stdlib.h>

int
main()
{
	char input;
	scanf("%c", &input);
	if(input == 'h') {
		printf("AHA");
	}
	
	printf("the char was %c\n", input);

	char myChar = "hello"[2];
	printf("%c it is \n", myChar);

	char str[] = "abc";
	printf("%s \n", str);
	str[1] = '!';
	printf("%s \n", str);
	
	int field_size = 20;
	char field[field_size][field_size];
	int right_border = field_size - 1;
	
	int i, j;
	for(i = 0; i < field_size; i++) {
		for (j = 0; j < field_size; j++) {
			if(i == 0 || i == right_border || j == 0 || j == right_border) {
				field[i][j] = '%';
				} else {
					field[i][j] = '.';
				}
		}
	}
	printf("built field \n");
	for(i = 0; i < field_size; i++) {
		for (j = 0; j < field_size; j++) {
			printf("%c", field[i][j]);
		}
		printf("\n");
	}	

	return EXIT_SUCCESS;
}
