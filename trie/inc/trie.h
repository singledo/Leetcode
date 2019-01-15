#ifndef _trie_h
#define _trie_h

#include "ComInc.h"
#define AlphabetNum (26)
// low alphabet to upper alphabet 
#define LUInter ('A' - 'a')

struct TrieNode
{
    bool Isleaf;
    u32 count;
    char ch;
    struct TrieNode *children[AlphabetNum];
};
typedef struct TrieNode TrieNode;

struct TrieRoot
{
    u32 MaxLen ;
    TrieNode *children[AlphabetNum];
};
typedef struct TrieRoot TrieRoot;

bool TrieInsert(TrieRoot *root, char *str);

bool TrieSearch(TrieRoot *root, char *str);

bool TrieDel(TrieRoot *root, char *str);

bool TrieInit(TrieRoot *root);

#endif

