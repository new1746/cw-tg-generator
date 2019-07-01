const short int ttl = 10;
const char windowname[] = "Tournament grid generator";

typedef char text[ttl+1];

text buffer[32];

int grid4(int, text[]);
int grid8(int, text[]);
int grid16(int, text[]);
int grid32(int, text[]);
