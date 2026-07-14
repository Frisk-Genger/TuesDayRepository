#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuestionHeader_Kawazoe.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数宣言
    int player;
    int cpu;
    int probability;

    //初期化
    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;

    srand((unsigned int)time(nullptr));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    do
    {
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;

        player = InputCheck(PITCHING_MIN, PITCHING_MAX);
        //入力
        PitchingType(player);
        //乱数
        cpu = rand() % PROBABILITY;

        probability = rand() % PROBABILITY;

        //ボール、ストライク、アウト、ヒット、三振、フォアボールのカウント
        //プレイヤーとCPUの選んだ数字が違う場合4回に1回ボールにする
        if (player != cpu)
        {
            if (probability == 0)
            {
                cout << "ボール！" << endl;
                ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        //プレイヤーとCPUの選んだ数字が同じ場合4回に1回アウトにする
        //ストライクとボールのカウントを0に戻す
        else
        {
            strike = 0;
            ball = 0;

            if (probability == 1)
            {
                cout << "OUT!!" << endl;
                out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                hit++;
            }
        }

        //ストライクカウントが3になると三振でアウト
        //ボールカウントが4になるとフォアボールでヒット
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                out++;
            }
            else
            {
                cout << "フォアボール！" << endl;
                hit++;
            }

            strike = 0;
            ball = 0;
        }

        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

    } while (out < OUT_COUNT && hit < HIT_COUNT);
    //勝敗結果
    Result(out);

    return 0;
}