#pragma once
#include <iostream>
using namespace std;
class Solution {
public:
	int hammingDistance(int x, int y) {
		int num = 0;
		for (int i = 0; i<32; i++)
		{
			int val = 1 << i;      // <<��ʾ��������� ��;�ǽ�����*2 �û�����������ڼ���������Զ����Ʊ�ʾ �趨1Ϊ��ʼֵ ѭ��*2
			                       
			if (val>x&&val>y) {    //val��x y�Ƚ� ���valͬʱ����xy ����ѭ�� ��Ϊval�Ѿ�������ֵ û������
				break;
			}
			if ((x&val) != (y&val)) { // x&val ������&��ʾ��λ�����and ����������������ұ߶���� ȡС
				num++;               // ��  101011&010110= 000010
			}                        //������������ num��1
		}
		return num;
	}
};