#ifndef TESTH
#define TESTH

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

size_t SkipSpaces (const char* text);

int CheckEmpty (const char* text);

size_t SkipEnters (const char* text);

int ScanAllTree (const char* filename);

size_t RecScanTree (const char* text);

char* Read (const char* filename, long* ptrbufsz);

size_t ScanArg (const char* text);


#endif
