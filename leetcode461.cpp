#pragma once
#include <iostream>
using namespace std;
class Solution {
public:
	int hammingDistance(int x, int y) {
		int num = 0;
		for (int i = 0; i<32; i++)
		{
			int val = 1 << i;      // <<表示左移运算符 用途是将数据*2 用户输入的数字在计算机中是以二进制表示 设定1为初始值 循环*2
			                       
			if (val>x&&val>y) {    //val与x y比较 如果val同时大于xy 跳出循环 因为val已经超过数值 没有意义
				break;
			}
			if ((x&val) != (y&val)) { // x&val 在这里&表示按位运算符and 两串二进制码从最右边对齐后 取小
				num++;               // 即  101011&010110= 000010
			}                        //如果两个不相等 num加1
		}
		return num;
	}
};