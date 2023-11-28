//¿ìÀÖÊı
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int bitSum(int n) {
	int sum = 0;
	while (n)
	{
		int t = n % 10;
		sum += t * t;
		n /= 10;
	}
	return sum;
}
bool isHappy(int n) {
	int slow = n, fast = bitSum(n);
	while (slow != fast)
	{
		slow = bitSum(slow);
		fast = bitSum(bitSum(fast));
	}
	return slow == 1;
}

int main() {
	vector<int> v;
	sort(v.begin(), v.end());
}