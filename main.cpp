#include "Enemy.h"

int main() {
    Enemy enemy;

    for (int i = 0; i < 3; ++i) {
        enemy.update();
    }

    return 0;
}