#include <iostream>
#include "20260707_Header.h"
using namespace std;

void ShowArray(int ary[], int index);

void AddArray(int ary[], int index);

int main(void)
{
	//配列
	int arry[INDEX] = {};
	//配列に追加する
	cout << "10個の数字を入力してください\n" << endl;
	//配列へ入力する関数を呼び出します
	AddArray(arry, INDEX);
	//偶数と奇数で振り分ける
	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2)
		{
			cout << arry[i] << "\n";
		}
	}
	cout << "奇数:" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if(arry[i] % 2 == 0)
		{
			cout << arry[i] << "\n";
		}
	}
	
	return 0;
}