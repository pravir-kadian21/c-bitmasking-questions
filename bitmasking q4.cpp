// COUNT SET BITS
// count number of 1s in binary representation of an integer

// Input Format:
// Input N = Number of Test Cases, followed by N numbers

// Constraints:
// Output Format
// Number of Set Bits in each number each in a new line

// Sample Input
// 3
// 5
// 4
// 15
// Sample Output
// 2
// 1
// 4
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        int ans =0;
        cin>>no;
        while(no!=0){
            ans++;
            no=no&(no-1);
        }
        cout << ans << endl;
    }
	return 0;
}