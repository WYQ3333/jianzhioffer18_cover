#include<iostream>
using namespace std;

//class Solution {
//public:
//	int rectCover(int number) {
//		if (number <= 0) {
//			return number;
//		}
//		int f1 = 1;
//		int f2 = 2;
//		int f3;
//
//		for (int i = 3; i <= number; i++) {
//			f3 = f1 + f2;
//			f1 = f2;
//			f2 = f3;
//		}
//		return f3;
//	}
//};


int rectCover(int number) {
	if (number <= 0) {
		return number;
	}
	return (rectCover(number - 1) + rectCover(number - 2));
}



//void TestFunc(){
//	Solution s;
//	auto temp=s.rectCover(4);
//	cout << temp << endl;
//
//}

int main(){
	TestFunc();
	system("pause");
	return 0;
}