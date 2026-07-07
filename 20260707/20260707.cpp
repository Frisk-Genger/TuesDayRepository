#include<iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

void ShowArray(int ary[], int index);

void AddArray(int ary[], int index);

int main(void)

{

	//配列

	int ary[10];

	srand((unsigned int)time(NULL));

	ShowArray(ary, 10);

	cout << "追加：" << endl;

	AddArray(ary, 10);

	cout << "表示：" << endl;

	ShowArray(ary, 10);



	for (int i = 0; i < 10; i++)

	{

		ary[i] = rand() % 100;

	}

	return 0;

}

