int lengthOfLastWord(char* s) {
    int length = 0;
    int tail = strlen(s) - 1;
    
    // Trim trailing spaces
    while (tail >= 0 && s[tail] == ' ') {
        tail--;
    }
    
    // Count characters of the last word
    while (tail >= 0 && s[tail] != ' ') {
        length++;
        tail--;
    }
    
    return length;
}
