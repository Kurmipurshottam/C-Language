#include<stdio.h>
int main()
{
	int choice;
	printf("----------menu----------");
	printf("\n1 for Vowel");
	printf("\n2 for Consonant");
	printf("\n----------------------");
	printf("\nenter your choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Vowels:-");
			printf("\n A E I O U");
			printf("\n a e i o u");
			break;
	
		case 2:
			printf("\n Vowels:-");
			printf("\nB C D F G H J K L M N P Q R S T V W X Y Z");
			printf("\nb c d f g h j k l m n p q r s t v w x y z");
			break;
			
		default:
			printf("Enter Valid Input");
			break;
	}		
	return 0;
}
