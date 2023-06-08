#include "Struct.h"
#include "Pa2.h"

int instructions(void)
{
	int operation = 0;
	printf("Welcome to the digital music manager.\n\n");
	printf("Please enter the operation you would like to\n");
	printf("perform from the following list:\n\n");
	printf("1 load - reads records from a file called musicPlayList.csv\n");
	printf("2 store - writes records to a file called musicPlayList.csv\n");
	printf("3 Display - prints records, and its attributes to the screen\n");
	printf("4 Insert - new song information\n");
	printf("5 Delete - removes a record from the list.\n");
	printf("6 Edit - Edit record and its attributes\n");
	printf("7 Rate - Rate the song\n");
	printf("8 Exit - saves song list to a file\n");

	scanf("%d", &operation);
	printf("Operation selected is %d\n", operation);
	getchar();

	return (operation);
}
/*This whole function I was helped by my sister Nikita*/
void load(sptr *song_ptr)
{
	FILE *infile = NULL;
	char *str;
	char lineread[100] = { NULL };
	char artist[64] = { NULL };				//Artist - a string
	char Album_title[128] = { NULL };			//Album title – a string
	char Song_title[64] = { NULL };	//Song title – a string
	char Taylor[100] = { NULL }; // taylor is like the lineread function that I have.
	char Drake1[100] = { NULL };
	char Drake2[100] = { NULL };
	char Perri[100] = { NULL };
	char Bieber[100] = { NULL };
	char Eminem[100] = { NULL };
	char Adele[100] = { NULL };
	char Taylor2[100] = { NULL };
	char Brooks[100] = { NULL };
	char Genre[16] = { NULL };					//Genre – a string
	int min;						//song length minutes
	int sec;						//song length in seconds
	int rating;						//Rating – an integer (1 – 5)
	int times_played = 0;
	int j = 0;
	
	sptr newptr = NULL;
	sptr prevptr = NULL;
	sptr curptr = NULL;
	sptr nextptr = NULL;
	Load Loading[100];
	int c = 0;


	//Create node

	infile = fopen("musicPlayList.csv", "r");
	if (infile == NULL)
	{
		printf("Error: File is empty.\n");
	}
	else
	{
		/**************************************************************************************************/
		/*This is the list of Artist names and each name is tied to its respective artist from the csv file.
		This is for organizational reasons.*/
		/**************************************************************************************************/
		fgets(Taylor, 100, infile);
		fgets(Drake1, 100, infile);
		fgets(Drake2, 100, infile);
		fgets(Perri, 100, infile);
		fgets(Bieber, 100, infile);
		fgets(Eminem, 100, infile);
		fgets(Adele, 100, infile);
		fgets(Taylor2, 100, infile);
		fgets(Brooks, 100, infile);
				

		char* ptoken;
		int i = 0;
		int j = 0;
		if (Taylor[0] == '\"')
		{
			
			/*Taylor Swift function*/
			/*You are taking the strtok of the address of lineread incremented by 1 and bypassing the first " you are
			then printing the name of the artist and such to the screen.*/
			ptoken = strtok(&Taylor[1], "\"");
			printf("Artist:%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album name:%s\n", ptoken);
			ptoken = strtok(NULL, ",");
			printf("Music Name:%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time:%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of Time Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);
			/*********************************************************************************/
								/*Drake first function*/
			/*********************************************************************************/
			ptoken = strtok(&Drake1, "\,");
			printf("Artist: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album name:%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number of Times Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);
			/*********************************************************/
					/*Drake function part 2*/
			/********************************************************/
			ptoken = strtok(&Drake2, "\,");
			printf("Artist: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album name :%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of Times Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);

			/********************************************************/
						/*Christina Perri function*/
			/********************************************************/
			ptoken = strtok(&Perri[1], "\"");
			printf("Artist:%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of Times Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);
			
			/********************************************************/
						/*Bieber Function*/
			/********************************************************/
			ptoken = strtok(&Bieber[1], "\"");
			printf("Artist:%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time:%s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of Times Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n");

			/**********************************************************/
						/*Eminem Function*/
			/**********************************************************/
			ptoken = strtok(&Eminem, "\,");
			printf("Artist: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of Times Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);
			/*******************************************************/
							/*Adele Function*/
			/*******************************************************/
			ptoken = strtok(&Adele, "\,");
			printf("Artist: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of times Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);
			/*****************************************************/
						/*Taylor no:2 Function */
			/****************************************************/
			ptoken = strtok(&Taylor2, "\"");
			printf("Artist: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of Times Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);
			/****************************************************/
							/*Brooks Function*/
			/****************************************************/
			ptoken = strtok(&Brooks, "\,");
			printf("Artist: %s \n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Album Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Music Name: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Genre: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Time: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Number Of Time Played: %s\n", ptoken);
			ptoken = strtok(NULL, "\,");
			printf("Rating: %s\n", ptoken);
			printf("\n", ptoken);
		
		}
		
		
	}
		
		return;
}
//https://www.geeksforgeeks.org/doubly-linked-list/
//https://stackoverflow.com/questions/14916527/writing-to-a-csv-file-in-c
void store(sptr *song_ptr)
{
	printf("write the name of the artist and Album you want to write?");
	//scanf("%s", );
}

/*This whole function I was also helped by my sister.*/
void display(sptr *song_ptr)
{
	sptr nextptr = NULL;
	sptr prevptr = NULL;
	sptr curptr = NULL;
	int rec = 0;
	int disp_op = 0;
	int sort_op = 0;
	char artist[64] = { '\0' };
	char album[128] = { '\0' };
	char song_title[64] = { '\0' };
	char genre[16] = { '\0' };
	int rating = 0;
	int times_played = 0;


	printf("Do you wish to print all records, or a record based on a sort?\n\n");
	printf("Enter 1 - For all records\n\n");
	printf("Enter 2 - For a record based on a sort\n\n");
	scanf("%d", &disp_op);
	getchar();
	curptr = *song_ptr;

	if (disp_op == 1)
	{
		while (curptr->prevptr != NULL) //find first record in list
		{
			curptr = curptr->prevptr;
		}

		rec = 1;
		printf("Record %d\n", rec);
		printf("Artist = %s\n", curptr->artist);
		printf("Album title = %s\n", curptr->alb_title);
		printf("Song title = %s\n", curptr->song_title);
		printf("Genre = %s\n", curptr->genre);
		printf("Song Length = %d %d\n", curptr->min, curptr->sec);
		printf("Times played = %d\n", curptr->times_played);
		printf("Rating = %d\n\n", curptr->rating);

		while (curptr->nextptr != NULL) //Print records until last record is found
		{
			rec = rec + 1;
			curptr = curptr->nextptr;

			printf("Record %d\n", rec);
			printf("Artist = %s\n", curptr->artist);
			printf("Album title = %s\n", curptr->alb_title);
			printf("Song title = %s\n", curptr->song_title);
			printf("Genre = %s\n", curptr->genre);
			printf("Song Length = %d %d\n", curptr->min, curptr->sec);
			printf("Times played = %d\n", curptr->times_played);
			printf("Rating = %d\n\n", curptr->rating);
		}

	}
	else if (disp_op == 2)
	{
		printf("Enter 1 if you want to sort by artist\n");
		printf("Enter 2 if you want to sort by album title.\n");
		printf("Enter 3 if you want to sort by song title\n");
		printf("Enter 4 if you want to sort by genre.\n");
		printf("Enter 5 if you want to sort by rating\n\n");
		scanf("%d", &sort_op);
		getchar();
		curptr = *song_ptr;

		if (sort_op == 1)
		{
			printf("Please enter the artist you want to sort on\n");
			gets(artist);

			while (curptr->prevptr != NULL) //find first record in list
			{
				curptr = curptr->prevptr;
			}

			while (curptr != NULL && strcmp(artist, curptr->artist) != 0)
			{
				curptr = curptr->nextptr;
			}
			if (curptr != NULL)
			{
				printf("Record %d\n", rec);
				printf("Artist = %s\n", curptr->artist);
				printf("Album title = %s\n", curptr->alb_title);
				printf("Song title = %s\n", curptr->song_title);
				printf("Genre = %s\n", curptr->genre);
				printf("Song Length = %d %d\n", curptr->min, curptr->sec);
				printf("Times played = %d\n", curptr->times_played);
				printf("Rating = %d\n\n", curptr->rating);

			}
			else
			{
				printf("Error: Could not find artist.\n");
			}

		}
		else if (sort_op == 2) //album title
		{
			printf("Please enter the album title you want to sort on\n");
			gets(album);

			while (curptr->prevptr != NULL) //find first record in list
			{
				curptr = curptr->prevptr;
			}

			while (curptr != NULL && strcmp(album, curptr->alb_title) != 0)
			{
			
				curptr = curptr->nextptr;
			}
			if (curptr != NULL)
			{
				printf("Record %d\n", rec);
				printf("Artist = %s\n", curptr->artist);
				printf("Album title = %s\n", curptr->alb_title);
				printf("Song title = %s\n", curptr->song_title);
				printf("Genre = %s\n", curptr->genre);
				printf("Song Length = %d %d\n", curptr->min, curptr->sec);
				printf("Times played = %d\n", curptr->times_played);
				printf("Rating = %d\n\n", curptr->rating);

			}
			else
			{
				printf("Error: Could not find album title.\n");
			}
		}

		else if (sort_op == 3) //song title
		{
			printf("Please enter the song title you want to sort on\n");
			gets(song_title);

			while (curptr->prevptr != NULL) //find first record in list
			{
				
				curptr = curptr->prevptr;
			}

			while (curptr != NULL && strcmp(song_title, curptr->song_title) != 0)
			{
				
				curptr = curptr->nextptr;
			}
			if (curptr != NULL)
			{
				printf("Record %d\n", rec);
				printf("Artist = %s\n", curptr->artist);
				printf("Album title = %s\n", curptr->alb_title);
				printf("Song title = %s\n", curptr->song_title);
				printf("Genre = %s\n", curptr->genre);
				printf("Song Length = %d %d\n", curptr->min, curptr->sec);
				printf("Times played = %d\n", curptr->times_played);
				printf("Rating = %d\n\n", curptr->rating);

			}
			else
			{
				printf("Error: Could not find album title.\n");
			}
		}

		else if (sort_op == 4) //genre title
		{
			printf("Please enter the genre you want to sort on\n");
			gets(genre);

			while (curptr->prevptr != NULL) //find first record in list
			{
				
				curptr = curptr->prevptr;
			}

			while (curptr != NULL && strcmp(genre, curptr->genre) != 0)
			{
				
				curptr = curptr->nextptr;
			}
			if (curptr != NULL)
			{
				printf("Record %d\n", rec);
				printf("Artist = %s\n", curptr->artist);
				printf("Album title = %s\n", curptr->alb_title);
				printf("Song title = %s\n", curptr->song_title);
				printf("Genre = %s\n", curptr->genre);
				printf("Song Length = %d %d\n", curptr->min, curptr->sec);
				printf("Times played = %d\n", curptr->times_played);
				printf("Rating = %d\n\n", curptr->rating);

			}
			else
			{
				printf("Error: Could not find genre.\n");
			}
		}
		else if (sort_op == 5) //rating
		{
			printf("Please enter the rating you want to sort on\n");
			scanf("%d", &rating);

			while (curptr->prevptr != NULL) //find first record in list
			{
				//nextptr = curptr;
				curptr = curptr->prevptr;
			}

			while (curptr != NULL && rating != curptr->rating)
			{
				//prevptr = curptr;
				curptr = curptr->nextptr;
			}
			if (curptr != NULL)
			{
				printf("Record %d\n", rec);
				printf("Artist = %s\n", curptr->artist);
				printf("Album title = %s\n", curptr->alb_title);
				printf("Song title = %s\n", curptr->song_title);
				printf("Genre = %s\n", curptr->genre);
				printf("Song Length = %d %d\n", curptr->min, curptr->sec);
				printf("Times played = %d\n", curptr->times_played);
				printf("Rating = %d\n\n", curptr->rating);

			}
			else
			{
				printf("Error: Could not find rating.\n");
			}
		}

	}
	else
	{
		printf("Error: You did not enter a valid display operation\n");
	}
	return;
}

/*This I was helpped by my sister Nikita.*/
void insert(sptr *song_ptr)
{
	sptr newptr = NULL;
	sptr prevptr = NULL;
	sptr curptr = NULL;
	char artist[64] = { '\0' };
	char album[128] = { '\0' };
	char song_title[64] = { '\0' };
	char genre[16] = { '\0' };
	int song_length_minutes = 0;
	int song_length_seconds = 0;
	int rating = 0;
	int sort_value = 1; //defaults to sort on artist
	int times_played = 0;

	newptr = malloc(sizeof(Song)); //Create node

	printf("Enter artists' name.\n");
	gets(artist);

	printf("Enter album title\n");
	gets(album);

	printf("Enter song title.\n");
	gets(song_title);

	printf("Enter genre of song.\n");
	gets(genre);

	printf("Enter song length in minutes and seconds.\n");
	printf("Please enter minutes first.\n");
	scanf("%d", &song_length_minutes);
	getchar();

	printf("Please enter the seconds.\n");
	scanf("%d", &song_length_seconds);
	getchar();

	printf("Please enter a rating from 1 to 5. 1 being lowest, 5 being the highest.\n");
	scanf("%d", &rating);
	getchar();

	if (newptr != NULL) //memory space is available
	{
		strcpy(newptr->artist, artist);
		strcpy(newptr->alb_title, album);
		strcpy(newptr->song_title, song_title);
		strcpy(newptr->genre, genre);
		newptr->min = song_length_minutes;
		newptr->sec = song_length_seconds;
		newptr->times_played = times_played;
		newptr->rating = rating;

		prevptr = NULL;
		curptr = *song_ptr;

		printf("How would you like to sort this record?\n");
		printf("1 = alphabetically based on artist,\n");
		printf("2 = alphabetically based on album title,\n");
		printf("3 = alphabetically based on song title,\n");
		printf("4 = alphabetically based on genre,\n");
		printf("5 = numerically based on rating\n");

		scanf("%d", &sort_value);

		if (sort_value == 1) //sort on artists
		{
			//define correct location in the list
			while (strcmp != NULL && artist, curptr->artist) // need to develop an alphabetical sort routine
			{
				prevptr = curptr;
				curptr = curptr->nextptr;
			}

			if (prevptr == NULL) //insert new node at beginning of list
			{
				newptr->nextptr = *song_ptr;
				*song_ptr = newptr;
			}
			else //insert new node between previous pointer and current pointer
			{
				prevptr->nextptr = newptr;
				newptr->nextptr = curptr;
			}
		}
		else if (sort_value == 2) //sort on album title
		{
			//define correct location in the list
			while (curptr != NULL && album > curptr->alb_title)
			{
				prevptr = curptr;
				curptr = curptr->nextptr;
			}

			if (prevptr == NULL) //insert new node at beginning of list
			{
				newptr->nextptr = *song_ptr;
				*song_ptr = newptr;
			}
			else //insert new node between previous pointer and current pointer
			{
				prevptr->nextptr = newptr;
				newptr->nextptr = curptr;
			}

		}
		else if (sort_value == 3) //sort on song_title
		{
			//define correct location in the list
			while (curptr != NULL && song_title > curptr->song_title)
			{
				prevptr = curptr;
				curptr = curptr->nextptr;
			}

			if (prevptr == NULL) //insert new node at beginning of list
			{
				newptr->nextptr = *song_ptr;
				*song_ptr = newptr;
			}
			else //insert new node between previous pointer and current pointer
			{
				prevptr->nextptr = newptr;
				newptr->nextptr = curptr;
			}

		}
		else if (sort_value == 4) //sort on genre
		{
			//define correct location in the list
			while (curptr != NULL && genre > curptr->genre)
			{
				prevptr = curptr;
				curptr = curptr->nextptr;
			}

			if (prevptr == NULL) //insert new node at beginning of list
			{
				newptr->nextptr = *song_ptr;
				*song_ptr = newptr;
			}
			else //insert new node between previous pointer and current pointer
			{
				prevptr->nextptr = newptr;
				newptr->nextptr = curptr;
			}

		}
		else if (sort_value == 5) // sort on rating
		{
			//define correct location in the list
			while (curptr != NULL && rating > curptr->rating)
			{
				prevptr = curptr;
				curptr = curptr->nextptr;
			}

			if (prevptr == NULL) //insert new node at beginning of list
			{
				newptr->nextptr = *song_ptr;
				*song_ptr = newptr;
			}
			else //insert new node between previous pointer and current pointer
			{
				prevptr->nextptr = newptr;
				newptr->nextptr = curptr;
			}

		}
		else
		{
			//define correct location in the list
			while (curptr != NULL && artist > curptr->artist)
			{
				prevptr = curptr;
				curptr = curptr->nextptr;
			}

			if (prevptr == NULL) //insert new node at beginning of list
			{
				newptr->nextptr = *song_ptr;
				*song_ptr = newptr;
			}
			else //insert new node between previous pointer and current pointer
			{
				prevptr->nextptr = newptr;
				newptr->nextptr = curptr;
			}

		}
	}
	else
	{
		printf("No memory available. No info inserted into record.\n");
	}

	return;
}

//I was helped by my sister Nikita.
void del(sptr *song_ptr) //deleteing a song.
{
	char song_name[64];
	sptr nextptr = NULL;
	sptr prevptr = NULL;
	sptr curptr = NULL;
	sptr tempptr = NULL;

	printf("Please enter song title that you want to delete.\n");
	gets(song_name);

	if ((*song_ptr)->song_title == song_name)
	{
		tempptr = *song_ptr;
		*song_ptr = (*song_ptr)->nextptr;
		free(tempptr);

	}
	else
	{
		prevptr = *song_ptr;
		curptr = (*song_ptr)->nextptr;


		while (curptr->nextptr != NULL && curptr->song_title != song_name)
		{
			prevptr = curptr;
			curptr = curptr->nextptr;

		}
		if (curptr->song_title == song_name)//removing a song title.
		{
			tempptr = curptr;
			curptr = curptr->nextptr;
			free(tempptr);
		}

	}

	return;
}