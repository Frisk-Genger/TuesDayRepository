#include <iostream>
#include "Dog.h"
using namespace std;


int main()
{
    //Dogクラスをオブジェクト化
    Dog dog;

    //犬の名前を入力
    cout << "犬の名前を入力してください：";
    cin >> dog.Name;

    //犬の名前を表示
    dog.ShowProfile();

    return 0;
}
