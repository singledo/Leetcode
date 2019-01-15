#include "trie.h"

int main(int argc, char *argv[])
{
    printf ("Trie Programe \r\n");
    TrieRoot root;
    char src[] = "AbcDefg";
    TrieInit (&root);
    TrieInsert(&root, src);
    if (TrieInsert (&root, src) == false)
    {
        printf ("Trie Tree Insert Failed \r\n");
    }
    else
    {
        printf ("Insert Success\r\n");
    }
    return 0;
}
