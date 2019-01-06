#ifndef _HashMap_h
#define _HashMap_h

#include "ComInc.h"

#define ALPHABET_MAX (127)

struct HashMap
{
	/* alphabet hash map */
	u32 hash[ALPHABET_MAX]; 
};

typedef struct HashMap Hash;

typedef u32  (*GET)(Hash *map, char c);
typedef bool (*PUT)(Hash *map, char c, u32 time);

u32 HashGet(Hash *map,char c);

bool HashPut(Hash *map, char c, u32 time);

void HashMap_Init(Hash *map, char *src, u32 len);

void HashShow(Hash *map);

char* MinWindow(char *src, char *tar);

#endif


