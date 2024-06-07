#include <iostream>

class Enemy {
public:
    // ��ԑJ�ڊ֐��|�C���^�̒�`
    typedef void (Enemy::* StateFunction)();

    Enemy();

    // ��ԑJ�ڂ����s���郁���o�֐�
    void update();

private:
    // ��ԑJ�ڂ̂��߂̃����o�֐�
    void approach();
    void shoot();
    void retreat();

    StateFunction currentState;
};
