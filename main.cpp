#include <iostream>
#include <cstdlib> 
#include <ctime>   // time()用
#include "Player.h"

using namespace std;

int main() {
    // 実行するたびに乱数が変わるようにシード値を設定
    srand(static_cast<unsigned int>(time(0)));

    cout << "=== ハイカードゲーム 開始 ===" << endl << endl;

    // プレイヤークラスを2つ生成
    Player player1("プレイヤーA");
    Player player2("プレイヤーB");

    // それぞれカードを引く（内部で乱数を決定）
    player1.hit();
    player2.hit();

    // それぞれの数を表示
    player1.showNumber();
    player2.showNumber();

    cout << endl;

    // 勝敗判定（getNumber()を使って比較）
    if (player1.getNumber() > player2.getNumber()) {
        cout << "【結果】プレイヤーA の勝ち！" << endl;
    }
    else if (player1.getNumber() < player2.getNumber()) {
        cout << "【結果】プレイヤーB の勝ち！" << endl;
    }
    else {
        cout << "【結果】引き分け！" << endl;
    }

    cout << endl << "=== ゲーム終了 ===" << endl;
    return 0;
}