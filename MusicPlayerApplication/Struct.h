typedef struct song
{
	char artist[64];				//Artist - a string
	char alb_title[128];			//Album title – a string
	char song_title[64];			//Song title – a string
	char genre[16];					//Genre – a string
									//struct song_length *song_len;	//Song length – a struct type consisting of seconds and minutes, both integers
	int min;						//song length minutes
	int sec;						//song length in seconds
	int times_played;				//Number times played – an integer
	int rating;						//Rating – an integer (1 – 5)
	struct song *nextptr;			//Pointer to next node
	struct song *prevptr;			//Pointer to previous node 
}song;
typedef struct Musiclist
{
	int Recoard; //Make recoard into an integer
	int Duration;//The recoard needs to have a duration
	int Node; 
}Musiclist;

typedef struct Node
{
	int data;
	struct Node *Next;
	struct Node *pPrev;
}Node;

//typedef struct store
//{
//	char Artist;
//	char Album_title;
//	char Song_title;
//	char Genre;
//}store;

typedef struct Load
{
	char Artist; //Need to make Artist, Album_title, Song_title, Genre into strings.
	char Album_title;
	char Song_title;
	char Genre;
	int Number_times_played;
	int Rating;
}Load;

typedef struct Record
{
	int minutes;
	int seconds;
}Record;

typedef struct song Song;
//typedef struct song_length song_len; 
typedef Song *sptr;
//typedef song_len *slenptr;
