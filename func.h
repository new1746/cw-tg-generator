const short int ttl = 10;
const char windowname[] = "Tournament grid generator";

typedef char text[ttl+1];

text buffer[32] = {"team# 1","team# 2","team# 3","team# 4","team# 5","team# 6","team# 7","team# 8","team# 9","team# 10","team# 11","team# 12","team# 13","team# 14","team# 15","team# 16","team# 17","team# 18","team# 19","team# 20","team# 21","team# 22","team# 23","team# 24","team# 25","team# 26","team# 27","team# 28","team# 29","team# 30","team# 31","team# 32"};//ћаксимальное количесво команд (массив названий)

int placegrid[32];
int grid4(int);
int grid8(int);
int grid16(int);
int grid32(int);
