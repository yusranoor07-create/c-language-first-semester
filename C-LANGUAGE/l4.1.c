#include<stdio.h>
int main(void)
{
	char ch;
	printf(" Enter character :\n");
	scanf("%c", &ch);
	if( ch>='a' && ch<='z'){
		printf("It is a small alphabet.");
	}
	else if (ch>='A' && ch<='Z'){
		printf("It is a capital letter.");
	}
	else if (ch>='0' && ch<='9'){
		printf("It is a digit.");
	}
	else{
		printf("It is a special character.");
	}
	return 0;
}
