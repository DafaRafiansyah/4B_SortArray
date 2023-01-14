#include "tubes2.h"

void createStack(stack &S){
    Top(S) = 0;
}

bool isEmpty(stack S){
    if (Top(S) == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull(stack S){
    if (Top(S) == 50) {
        return true;
    } else {
        return false;
    }
}

void push(stack &S, infotype x){
    if (isFull(S) == false) {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

infotype pop(stack &S){
    infotype x;
    x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo(stack S){
    int i;
    for (i=Top(S); i>=1; i--) {
        cout << info(S)[i];
    }
}

void sortArray(infotype arr[50], int n){
    stack S;
    createStack(S);
    int i, j;
    i = 0;
    j = 0;
    while (i<n){
        if (arr[i] != -1){
           int min = i;
            for (j=i+1; j < n; j++){
                if (arr[j] < arr[min] && arr[j] != -1){
                min = j;
            }
        }
        push(S, arr[min]);
        arr[min] = -1;
        } else if (arr[i] == -1){
            i++;
        }
    }
    for (i=0; i<n; i++){
       arr[i] = pop(S);
    }
}
