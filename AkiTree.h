#ifndef AKITREEH
#define AKITREEH

#include <stdio.h>

void Pull (void)
{
    system ("git -C AkiTree/ pull origin master\n");
}

void Push (void)
{
    system ("git -C AkiTree/ add AkiTree.txt\n");
    system ("git -C AkiTree/ commit -m \"Fun\"\n");
    system ("git -C AkiTree/ push origin master\n");
}

#endif 