#ifndef UTIL_H__
#define UTIL_H__

#include <assert.h>

typedef char *string;
typedef char bool;

void *checked_malloc(int);
string String(char *); 

typedef struct U_boolList_ *U_boolList;
struct U_boolList_ {bool head; U_boolList tail;};
U_boolList U_BoolList(bool head, U_boolList tail);
string FormatString(string s, ...);

#endif