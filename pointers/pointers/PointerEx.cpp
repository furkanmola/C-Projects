#include "PointerEx.h"
#include <iostream>

using namespace std;

void PointerEx::swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

