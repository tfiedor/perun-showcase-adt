#include <algorithm>
#include <random>
#include <chrono>
#include <climits>
#include <iostream>
#include <vector>

#ifdef DEBUG
int list_max_size = 10;
#else
int list_max_size = 1000000;
#endif

int MAX_HEIGHT = 50;
int LEVEL_PROBABILITY = 2;

int main(int argc, char* argv[]) {
    if (argc >= 1) {
        list_max_size = strtol(argv[1], NULL, 10);
    }

    // init the rng
    srand(time(NULL));
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, INT_MAX - 1);

    // init the skiplist
    std::vector<int> vec;

    // perform the operations
    for(int i = 0; i < list_max_size; i++) {
        vec.push_back(dis(gen));

        if(i % 1000 == 0) {
            std::find(vec.begin(), vec.end(), INT_MAX);
        }
    }
}
