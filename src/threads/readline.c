char* readline(const char* prompt){
    printf(prompt);
    char key;
    char* line = (char*)malloc(256);
    char* l_ptr = line;
    while((key = input_getc()) != '\n'){
        ;
        putchar(key);
        *l_ptr = key;
        l_ptr++;
    }
    *l_ptr = '\0';
    return line;
} 