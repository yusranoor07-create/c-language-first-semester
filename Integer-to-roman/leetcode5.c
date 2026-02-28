
char* intToRoman(int num) {
    static char roman[20];
    int i = 0, pos = 0;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    while(num > 0) {
        while(num >= values[i]) {
            num -= values[i];
            char* s = symbols[i];
            while(*s) roman[pos++] = *s++;
        }
        i++;
    }
    roman[pos] = '\0';
    return roman;
