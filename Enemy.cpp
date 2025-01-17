#include "Enemy.h"

Enemy::Enemy() {
    // 初期状態は接近
    currentState = &Enemy::approach;
}

void Enemy::approach() {
    std::cout << "敵は接近している" << std::endl;
    // 次の状態に遷移
    currentState = &Enemy::shoot;
}

void Enemy::shoot() {
    std::cout << "敵は射撃している" << std::endl;
    // 次の状態に遷移
    currentState = &Enemy::retreat;
}

void Enemy::retreat() {
    std::cout << "敵は離脱している" << std::endl;
    // 最後の状態で初期状態に戻る
    currentState = &Enemy::approach;
}

void Enemy::update() {
    (this->*currentState)();
}
