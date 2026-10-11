#ifndef CTR_P_EAAE_TYPES_H
#define CTR_P_EAAE_TYPES_H

typedef unsigned int uint;
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned short ushort;
typedef unsigned short undefined2;
typedef unsigned char undefined;
typedef unsigned char byte;
typedef unsigned char undefined1;
#ifdef __cplusplus
/* bool, true and false are keywords in C++, and NULL must be a plain 0 there. */
#ifndef NULL
#define NULL 0
#endif
#else
typedef _Bool bool;
#define NULL ((void*)0)
#define false (0)
#define true (1)
#endif

#endif
