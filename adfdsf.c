#include <stdio.h>

void print_hello();

int main(void)
{
	char name_print, s_print;
	printf("�̸��� �Է��ϼ���.\n");
 	scanf("%c", &name_print);
	printf("������ �Է��ϼ���.  (m/f)\n");
 	scanf("%c", &s_print);
	print_hello(name_print, s_print);
	return 0;
 } 
 
 void print_hello(char name_print, char s_print)
 {
 	if(s_print == 'm')
 		printf("Hello Mr.%c\n", name_print);
 	else if (s_print == 'f')
 		printf("Hello Ms.%c\n", name_print);
 	else
 		printf("Hello %c\n", name_print);
 }