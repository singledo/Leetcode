#include "trie.h"

bool TrieInit(TrieRoot *root)
{
    u32 i = 0;
    root->MaxLen = 0;
    for (i=0; i<AlphabetNum; i++)
    {
        root->children[i] = NULL;
    }
    return true;
}
/*
 * input: root - trie tree, str - onle lower alphabet
 * */
bool TrieInsert(TrieRoot *root, char *str)
{
    if (str == NULL || strlen (str) == 0)
    {
        return false;
    }

    u32 len = strlen (str);
    u32 i = 0;
    char ch;
    TrieNode **node = root->children;

    for (i=0; i<len; i++)
    {
        if (*(str+i) >= 'A' && *(str+i) <= 'Z')
        { // upper alphabet to lower alphabet
            ch = *(str+i) - LUInter;
        }
        else
        {
            ch = *(str+i);
        }
       if (*(node+(ch-LUInter)) == NULL)
       {
           TrieNode *temp = NULL;
           *(node+ch-LUInter) == (TrieNode*)malloc(sizeof(TrieNode));
           if (*(node+ch-LUInter) == NULL)
           {
            return false;
           }
           temp = *(node+ch-LUInter);
           temp->ch = ch;
           memset (temp->children, 0, sizeof(TrieNode)*AlphabetNum);
           if (i == len-1)
           {
              temp->Isleaf = true;
           }
       }
       node = (*(node+(ch-LUInter)))->children;
    }
    return true;
}

bool TrieSearch(TrieRoot *root, char *str)
{
    return true;
}

bool TrieDel(TrieRoot *root, char *str)
{
    return true;
}
