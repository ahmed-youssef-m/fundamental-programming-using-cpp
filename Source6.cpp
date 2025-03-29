#include <iostream>
int v = 10;
int* v1 = &v;
int** v2 = &v1;
int a[] = { 10 };
int* a1[] = { &v,v1 };
int** a2[] = { v2 ,a1 };
std::cout << a1[0] << " " << *a1[0] << "\n";

char c = 'c';
char c[] = { 'l','o' };