#include<iostream>
#include<vector>

using namespace std;

class Solution1 {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		int i = 0;
		int result = 1;
		if (n == 0){
			return 0;
		}
		if (n < 10&&n>0){
			return 1;
		}
		for (i = 10; i <= n; ++i){
			int temp = i;
			while (temp){
				if (temp % 10 == 1){
					++result;
				}
				temp = temp / 10;
			}
		}
		return result;
	}
};

class Solution {
public:
	    int NumberOf1Between1AndN_Solution(int n) {
		int count = 0;//1�ĸ���
		int i = 1;//��ǰλ
		int current = 0, after = 0, before = 0;
		while ((n / i) != 0){
			current = (n / i) % 10; //��λ����
			before = n / (i * 10); //��ǰλ����
			after = n - (n / i)*i; //��λ����
			//���Ϊ0,����1�Ĵ����ɸ�λ����,���ڸ�λ���� * ��ǰλ��
			if (current == 0)
				count += before*i;
			//���Ϊ1,����1�Ĵ����ɸ�λ�͵�λ����,��λ*��ǰλ+��λ+1
			else if (current == 1)
				count += before * i + after + 1;
			//�������1,����1�Ĵ����ɸ�λ����,//����λ����+1��* ��ǰλ��
			else{
				count += (before + 1) * i;
			}
			//ǰ��һλ
			i = i * 10;
		}
		return count;
	}
};

void TestFunc(){
	Solution s;
	cout << s.NumberOf1Between1AndN_Solution(0) << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}