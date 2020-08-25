#include "filename_extension_check.h"

/*
int strcmp(const char* s1, const char* s2)
{
    while(*s1 && (*s1==*s2))
        s1++,s2++;
    return *(const unsigned char*)s1-*(const unsigned char*)s2;
}

char *strpbrk(const char *cs, const char *ct)
{
    const char *sc1, *sc2;

    for (sc1 = cs; *sc1 != '\0'; ++sc1) {
        for (sc2 = ct; *sc2 != '\0'; ++sc2) {
            if (*sc1 == *sc2)
                return (char *)sc1;
        }
    }
    return NULL;
}

char *strsep(char **s, const char *ct)
{
    char *sbegin = *s;
    char *end;

    if (sbegin == NULL)
        return NULL;

    end = strpbrk(sbegin, ct);
    if (end)
        *end++ = '\0';
    *s = end;
    return sbegin;
}

*/

char *check_fe(char *file_path)
{
    char *target_ext[] = {
        // document
        "txt",
        "ppt",
        "pptx",
        "xls",
        "doc",
        "docx",
        "pdf",

        // image
        "jpg",
        "png",

        // music
        "mp3",
        "flac",

        //media
        "mp4",
        "mkv"};
    char *str_tok;

    printk(KERN_ALERT "--[+] check array size : %d", (int)ARRAY_SIZE(target_ext));

    while((str_tok=strsep(&file_path,".")!=NULL){
        printk(KERN_ALERT "---[*] check tok : %s", str_tok);
    }
    printk(KERN_ALERT "---[*] final tok : %s", str_tok);

    // int tok_size = 0;
    // tok_size = ARRAY_SIZE(str_tok);
    // int iter = 0;

    /*
    if (!(str_tok))
    {
        for (iter = 0; iter < ARRAY_SIZE(target_ext); iter++)
        {
            if (strcmp((const char*)str_tok[tok_size - 1],(const char*)target_ext[iter]))
                return target_ext[iter];
        }
    }
    */

    return "no match...";
}