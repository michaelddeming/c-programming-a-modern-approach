

void censor(char *s) {

    while (*s) {
        
        if (s[0] == 'f' && 
            s[1] == 'o' &&
            s[2] == 'o' ) {

            s[0] = 'x';
            s[1] = 'x';
            s[2] = 'x';
        }
        s++;
    }

}