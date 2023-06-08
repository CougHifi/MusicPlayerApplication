/*******************************************************************************************
* Programmer: Cougar Fischer                                                               *

* Class : CptS 122, Spring 2018                                                            *

* Programming Assignment : PA2                                                             *

* Date : January 31, 2018 *

* Description : This program is a Itunes style music that takes music that you insert and will play it in your playlist where you can shuffle the play list as well.
The load function is having quite a bit of issues parseing properly which it will be worked on more.

I was helped by My father, Jovon, Nikita, Karl Estas, Elijah Craig on how to get this program to work! Thanks for your help!
*******************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct song Song;
//typedef struct song_length song_len; 
typedef Song *sptr;
//typedef song_len *slenptr;

int intructions(void);
void load(sptr *song_ptr);
//void store();
void display(sptr *song_ptr);
void insert(sptr *song_ptr);
void del(sptr *song_ptr);
void edit();
void sort();
void rate();
void exit();

