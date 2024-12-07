#include "DekArray.h"


void DarrayPrint(Darray_t darray) {

    printf("[ ");

    for (int i = 0; i < darray.length; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%u", darray.array[i]);
    }

    printf("]");
}

void DarrayAppend(Darray_t *darray, int item) {
    if (darray->_size == darray->length){
        _ResizeArray(darray);
    }

    darray->array[darray->length] = item;

    darray->length++;
}

int DarrayInsert(Darray_t *darray, int item, int index){

    if (darray->length > item) {
        return -1;
    }

    if (darray->length == darray->_size){
        _ResizeArray(darray);
    }

    for (int i = darray->length; i > index; i--) {
        darray->array[i] = darray->array[i-1];
    }

    darray->array[index] = item;

    darray->length++;

    return 0;
}

int DarrayRemove(Darray_t *darray, int index){

    if (index >= darray->length || index < 0){
        return -1;
    }
    int item = darray->array[index];
    for (int i = index; i < darray->length - 1; i++) {
        darray->array[i] = darray->array[i+1];
    }

    darray->length--;
    return item;
}

int DarraySearch(Darray_t darray, int item) {

    for (int i= 0; i < darray.length; i++){

        if(darray.array[i] == item){
            return i;
        }
    }

    return -1;
}

int DarrayBinarySearch(Darray_t darray, int key){
    int l,h,mid;

    l = 0;
    h = darray.length - 1;


    while(l < h) {

        mid = (l+h)/2;

        if (darray.array[mid] == key){
            return mid;
        }

        if (darray.array[mid] > key){
            h = mid - 1;

        }else{
            l = mid + 1;
        }
    }

    return -1;

}

int DarrayGet(Darray_t darray, int index){
    if (index >= darray.length || index < 0){
        return -1;
    }
    return darray.array[index];
}

int DarraySet(Darray_t *darray, int value, int index) {
    if (index >= darray->length || index < 0){
        return -1;
    }

    darray->array[index] = value;

    return 0;
}

int DarrayMax(Darray_t darray) {

    if (darray.length == 0){
        return -1;
    }

    int max = darray.array[0];

    for (int i = 0; i < darray.length; i++){
        if (max < darray.array[i]){
            max = darray.array[i];
        }
    }

    return max;
}

int DarrayMin(Darray_t darray) {

    if (darray.length == 0){
        return -1;
    }

    int min = darray.array[0];

    for (int i = 0; i < darray.length; i++){
        if (min > darray.array[i]){
            min = darray.array[i];
        }
    }

    return min;
}

void DarrayReverse(Darray_t *darray) {
    if (darray->length <= 1) {
        return;
    }
    int l,h,temp;

    l = 0;
    h = darray->length - 1;

    while (l < h){
        temp = darray->array[h];

        darray->array[h] = darray->array[l];
        darray->array[l] = temp;
        l++;
        h--;
    }

}

