#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260707_Header2_Kawazoe.h"
using namespace std;

int main(void)
{
	//定数
	const int INDEX = 3;
	//変数＆配列
	int i, j;
	int arry[INDEX][INDEX];
	//乱数の初期化
	srand((unsigned int)time(NULL));
	//ランダムで配置
	for (i = 0; i < INDEX; i++)
	{
		for (j = 0; j < INDEX; j++)
		{
			arry[i][j] = rand() % 10;
		}

	}

	//描画
	for (i = 0; i < INDEX; i++)
	{
		for (j = 0; j < INDEX; j++)
		{
			cout << arry[i][j] << ",";
		}

		//1行改行
		//cout << "\n";
		cout << endl;

	}
	return 0;
}