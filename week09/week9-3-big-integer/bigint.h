#define PLUS  1
#define MINUS -1

typedef struct {
  int digits;  // number of digits (i.e., length of num array)
  char *num;   // all digits as a string
  int sign;    // PLUS or MINUS
} BigInt;
