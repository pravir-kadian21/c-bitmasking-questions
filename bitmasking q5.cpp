UNIQUE NUMBERS - II
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format:
First line contains the number n. Second line contains n space separated number.

Constraints:
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[100005];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=0;
	for(int i=0;i<n;i++){
		res=res^a[i];
	}
	int res1=res;
	int j=0;
	int index=0;
	while(res1!=0){
		if((res1&1)==1){
			index=j;
			break;
		}
		j++;
		res1=res1&(res1-1);
	}
	int fno=0;
	for(int i=0;i<n;i++){
		int temp=a[i];
		if((temp&(1<<j))==1){
			fno=fno^temp;
		}
	}
	int sno;
	sno=fno^res;
	if(fno<sno){
		cout << fno << " " << sno << endl;
	}
	else{
		cout << sno << " " << fno << endl;
	}
	return 0;
}