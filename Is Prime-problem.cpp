//Is Prime problem

#include<iostream>
#include<vector>

using namespace std;

bool isPrime(int N) {

	if (N<=1)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {

	cout<<isPrime(36);

	return 0;
}