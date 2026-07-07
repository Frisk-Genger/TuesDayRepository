#pragma once

//定数
const int INDEX = 10;
const int MAX = 100;
const int MIN = 0;

/// <summary>
/// 配列追加関数
/// </summary>
/// <param name="ary"></param>
/// <param name="size"></param>
void AddArray(int ary[],int size);

/// <summary>
/// 入力チェック関数
/// </summary>
/// <param name="min"></param>
/// <param name="max"></param>
/// <returns></returns>
int InputCheck(int min, int max);
