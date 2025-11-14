
int strStr(char* haystack, char* needle) {
    int i, j;
    int hLen = strlen(haystack);
    int nLen = strlen(needle);
    
    if (nLen == 0) return 0;
    
    for (i = 0; i <= hLen - nLen; i++) {
        for (j = 0; j < nLen; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (j == nLen) return i;
    }
    
    return -1;
}

