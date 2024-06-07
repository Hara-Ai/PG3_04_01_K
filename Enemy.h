#include <iostream>

class Enemy {
public:
    // 状態遷移関数ポインタの定義
    typedef void (Enemy::* StateFunction)();

    Enemy();

    // 状態遷移を実行するメンバ関数
    void update();

private:
    // 状態遷移のためのメンバ関数
    void approach();
    void shoot();
    void retreat();

    StateFunction currentState;
};
