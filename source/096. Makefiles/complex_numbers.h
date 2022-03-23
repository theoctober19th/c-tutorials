#ifndef _COMPLEX_NUMBERS_H
#define _COMPLEX_NUMBERS_H

struct complex
{
    double real;
    double img;
};

struct complex add(struct complex c1, struct complex c2);
struct complex multiply(struct complex c1, struct complex c2);
void print(struct complex n);

#endif