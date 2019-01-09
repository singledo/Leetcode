#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
//  char jason[] = "{\"method\":\"CommonGet\",\"id\":0,\"params\":{\"Template\":\"phyInfEntry\"}}";
    char jason[] = "{\"method\":\"CommonGet\",\"id\":0,\"params\":{\"From\":1,\"To\":20,\"mm\":\"zz\",\"Template\":\"dot1qVlanCurrentEntry\", \"ss\":1}}";
    char *pStr = strstr(jason,"params");
    char *eStr = NULL;
    char *keyStr = NULL ;
    char *wordStr = NULL;
    char dst[] = "dot1qVlanCurrentEntry";
    char key[25];
    char word[25];

    printf("start #%s#\r\n", pStr);
    pStr = strstr(pStr, "{")+1;
    printf("start #%s#\r\n", pStr);
    eStr = strstr(pStr, "}");
    printf("end #%s#\r\n", eStr);

    printf("\r\n\r\n");

    int i = 0;
    int len = eStr - pStr ;
    char *param = (char*)malloc(sizeof(char)*len);
    memcpy(param, pStr, len );
    printf("param:[%s] \r\n", param);
       
    int count = 0;
    for (i=0; i<len; i++)
    {
        if (*(param+i)== ':')
        {
            count += 1;

        }
    }
    printf("count [%d] \r\n", count);
    

    while (pStr != NULL )
    {
       keyStr   = strstr(pStr, "\"");
       wordStr  = strstr(pStr, ":");
       pStr     = strstr(pStr+1, ",");
        
       printf("key 　[%s] \r\n", keyStr);
       printf("word　[%s] \r\n", wordStr);

       memcpy(key, keyStr+1, wordStr-keyStr-2);
       key[wordStr-keyStr-2] = 0;

       if (pStr != NULL )
       {
           if (*(wordStr+1) == '\"')
           {
            memcpy(word,wordStr+2, pStr-wordStr-3);
            word[pStr-wordStr-3] = 0;
           }
           else
           {
            memcpy(word,wordStr+1, pStr-wordStr-1);
            word[pStr-wordStr-1] = 0;
           }

       }
       else
       {
           if (*(wordStr+1) == '\"')
           {
            memcpy(word,wordStr+2, eStr-wordStr-3);
            word[eStr-wordStr-3] = 0;
           }
           else
           {
            memcpy(word,wordStr+1, eStr-wordStr-1);
            word[eStr-wordStr-1] = 0;
           }
       }
       printf("key [%s], word[%s]", key, word);
       printf("\r\n\r\n");
    }
    return 0;
}
