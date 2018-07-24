#include <algorithm>
#include <random>
#include <chrono>
#include <climits>
#include <iostream>
#include "structures/SLList.h"

#ifdef DEBUG
int list_max_size = 10;
#else
int list_max_size = 1000000;
#endif

int main(int argc, char* argv[]) {
    if (argc >= 1) {
        list_max_size = strtol(argv[1], NULL, 10);
    }

    // init the list
    SLList list;
    SLList_init(&list);

    // perform the operations
    for(int i = 0; i < list_max_size; i++) {
        SLList_insert(&list, i);

        if(i % 1000 == 0) {
            SLList_search(&list, 0);
        }
    }
    SLList_destroy(&list);
}
