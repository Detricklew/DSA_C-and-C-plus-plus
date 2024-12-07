#include <stdio.h>

#include <stdint.h>

#define DEFAULT_SIZE  32

 typedef struct Darray {
    int _size;
    int length;
    int *array;
} Darray_t;

Darray_t * DarrayInitialize();

void DarrayPrint(Darray_t darray);

int DarrayInsert(Darray_t *darray, int item, int index);

void DarrayAppend(Darray_t *darray, int item);

void _ResizeArray(Darray_t *darray);

int DarrayPop(Darray_t *darray);

int DarrayGet(Darray_t darray, int index);

int DarraySet(Darray_t *darray, int value, int index);

int DarrayMax(Darray_t darray);

int DarrayMin(Darray_t darray);

int DarrayRemove(Darray_t *darray, int index);

int DarraySearch(Darray_t darray, int item);

void DarrayReverse(Darray_t *darray);

int DarrayBinarySearch(Darray_t darray, int key);
