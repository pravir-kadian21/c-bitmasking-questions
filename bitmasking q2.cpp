// UNIQUE NUMBER - I
// We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time. ( Hint - Use Bitwise )

// Input Format:
// First line contains the number n. Second line contains n space separated number.

// Constraints:
// n < 10^5

// Output Format
// Output a single line containing the unique number

// Sample Input
// 7
// 1 1 2 2 3 3 4
// Sample Output
// 4
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[100005];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int result=0;
	for(int i=0;i<n;i++){
		result=result^a[i];
	}
	cout << result << endl;
	return 0;
}