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
		for (i = 10; i < n; ++i){
			while (i){
				if (i % 10 == 1){
					++result;
				}
				i = i / 10;
			}
		}
		return result;
	}
};

void TestFunc(){
	Solution s;
	cout << s.NumberOf1Between1AndN_Solution(11) << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}