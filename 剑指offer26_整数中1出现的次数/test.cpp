#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		int i = 0;
		int result = 1;
		if (n < 10){
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

void TestFunc(){
	Solution s;
	cout << s.NumberOf1Between1AndN_Solution(13) << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}