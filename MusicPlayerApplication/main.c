#include "Struct.h"
#include "Pa2.h"
//void menu();

int main(void)
{
	FILE* Music = fopen("musicPlayList.csv", "r");
	
		if (Music == NULL)		//this function is checking to see if there is a csv file or not.
		{
			printf("File is not found\n"); //this section the file is not found.
		}
		if (Music != NULL)//this section is when the file is found.
		{
			printf("The file is found\n");
		}

		int op = 0;
		int exit = 0;

		sptr startptr = NULL;

		while (exit == 0)
		{
			op = instructions();

			if (op == 1) //Load
			{
				load(&startptr);
			}
			else if (op == 2) //store
			{

			}
			else if (op == 3) //display
			{
				display(&startptr);
			}
			else if (op == 4) //insert
			{
				printf("Main operation selected is %d\n", op);
				insert(&startptr);
			}
			else if (op == 5) //delete
			{
				printf("Main operation selected is %d\n", op);
				del(&startptr);
			}
			else if (op == 6) //edit
			{

			}
			else if (op == 7) //rate
			{

			}
			else //exit
			{
				exit = 1;
			}
			printf("Enter 1 if you would like to exit, 0 to continue.\n");
			scanf("%d", &exit);
		}
		return (0);
}
