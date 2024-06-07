#include "Enemy.h"

Enemy::Enemy() {
    // ������Ԃ͐ڋ�
    currentState = &Enemy::approach;
}

void Enemy::approach() {
    std::cout << "�G�͐ڋ߂��Ă���" << std::endl;
    // ���̏�ԂɑJ��
    currentState = &Enemy::shoot;
}

void Enemy::shoot() {
    std::cout << "�G�͎ˌ����Ă���" << std::endl;
    // ���̏�ԂɑJ��
    currentState = &Enemy::retreat;
}

void Enemy::retreat() {
    std::cout << "�G�͗��E���Ă���" << std::endl;
    // �Ō�̏�Ԃŏ�����Ԃɖ߂�
    currentState = &Enemy::approach;
}

void Enemy::update() {
    (this->*currentState)();
}
