// ANSI escape shit

#define RED "\033[1;91m"
#define WHITE "\033[1;37m"
#define GREEN "\033[1;92m"
#define ERROR "\033[1;37m[\033[1;91m-\033[1;37m]\033[1;91m"
#define SUCCESS "\033[1;37m[\033[1;92m+\033[1;37m]\033[1;92m"

// Variable types

#define uint8 __UINT8_TYPE__
#define int8 __INT8_TYPE__


// Functions :3

unsigned int compare(const char *s1, char *s2){
    unsigned int index=0;
    while(*(s1+index)!='\0' && *(s2+index)!='\0'){
        if(*(s1+index)!=*(s2+index)) return 0;
        index++;
    }
    return 1;
}
