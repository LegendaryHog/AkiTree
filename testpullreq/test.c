size_t SkipSpaces (const char* text)
{
    size_t i = 0;
    for (i = 0; text[i] == ' ' || text[i] == '\t'; i++) {;}
    return i;
}

int CheckEmpty (const char* text)
{
    size_t i = 0;
    for (i = 0; text[i] != '}'; i++) {;}
    if (i == 1)
    {
        return 1;
    }
    return 0;
}

size_t SkipEnters (const char* text)
{
    size_t i = 0;
    for (i = 0; text[i] == ' ' || text[i] == '\t' || text[i] == '\n'; i++) {;}
    return i;
}

int ScanAllTree (const char* filename)
{
    if (filename == NULL)
    {
        return 1;
    }
    long bufsz = 0;
    char* buffer = Read (filename, &bufsz);
    
    if (RecScanTree (buffer) == 0)
    {
        free (buffer);
        return 1;
    }
    else
    {
        free (buffer);
        return 0;
    }
}

size_t RecScanTree (const char* text)
{
    size_t i = 0;
    i += SkipEnters (text + i);
    if (text[i] != '{')
    {
        printf ("Not meet {, symbol = %c (%d)\n", text[i], text[i]);
        return 0;
    }
    else
    {
        i++;
    }
    i += SkipSpaces (text + i);
    i += ScanArg (text + i, node);
    i += SkipSpaces (text + i);
    if (text[i] == '}')
    {
        i++;
        return i;
    }
    i += SkipEnters (text + i);
    if (CheckEmpty (text + i) == 0)
    {
        size_t dil = RecScanTree (text + i);
        if (dil == 0)
        {
            return 0;
        }
        else
        {
            i += dil;
        }
    }
    else
    {
        i += 2;
    }
    i += SkipEnters (text + i);
    if (CheckEmpty (text + i) == 0)
    {
        size_t dir = RecScanTree (text + i);
        if (dir == 0)
        {
            return 0;
        }
        else
        {
            i += dir;
        }
    }
    else
    {
        i += 2;
    }
    i += SkipEnters (text + i);
    if (text[i] != '}')
    {
        return 0;
    }
    else
    {
        i++;
        return i;
    }
}