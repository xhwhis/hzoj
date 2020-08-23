#include<iostream>
using namespace std;

int main() {
	double x;
	int n;
	cin>>x>>n;
	for(int i=0; i<n; i++) {
		x=x*1.06;
	}
	cout<<(int)x;
	return 0;
}
