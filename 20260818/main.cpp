#include<iostream>

using namespace std;
//回復した時にHPを30回復する
void Heal(int* hp)
{
	*hp += 30;
}
//ダメージを受けた時にHPを20減らす
void Damege(int* hp)
{
	*hp -= 20;
}

int main()
{
	int hp = 100;
	int* php = &hp;
	//初期体力
	cout << "HP:" << *php << endl;
	//30回復した体力
	Heal(&hp);
	cout << "HP:" << *php << endl;
	//20ダメージを受けた体力
	Damege(& hp);
	cout << "HP:" << *php << endl;

	return 0;
}