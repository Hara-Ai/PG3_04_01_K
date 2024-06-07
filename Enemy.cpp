#include "Enemy.h"

Enemy::Enemy() {
    // ‰Šúó‘Ô‚ÍÚ‹ß
    currentState = &Enemy::approach;
}

void Enemy::approach() {
    std::cout << "“G‚ÍÚ‹ß‚µ‚Ä‚¢‚é" << std::endl;
    // Ÿ‚Ìó‘Ô‚É‘JˆÚ
    currentState = &Enemy::shoot;
}

void Enemy::shoot() {
    std::cout << "“G‚ÍËŒ‚‚µ‚Ä‚¢‚é" << std::endl;
    // Ÿ‚Ìó‘Ô‚É‘JˆÚ
    currentState = &Enemy::retreat;
}

void Enemy::retreat() {
    std::cout << "“G‚Í—£’E‚µ‚Ä‚¢‚é" << std::endl;
    // ÅŒã‚Ìó‘Ô‚Å‰Šúó‘Ô‚É–ß‚é
    currentState = &Enemy::approach;
}

void Enemy::update() {
    (this->*currentState)();
}
