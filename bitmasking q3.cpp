// XOR PROFIT PROBLEM
// We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

// Input Format:
// We are given two integers x and y

// Constraints:
// l <= r <= 1000

// Output Format
// Print the maximum value of a XOR b

// Sample Input
// 5
// 6
// Sample Output
// 3
#include<iostream>
using namespace std;
int main () {
    int x,y;
    cin>>x>>y;
    int ans=0;
    int fans=0;
    for(int a=x;a<=y;a++){
        for(int b=x;b<=y;b++){
            ans = a^b;
            fans = max(ans,fans);
        }
    }
    cout << fans << endl;
	return 0;
}