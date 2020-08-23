#include<iostream>
using namespace std;

int main() {
	int n, min, max=0;
	cin>>n;
	for(int i=0; i<n; i++) {
		int x;
		cin>>x;
		if(i==0) min=x;
		if(min>x) min=x;
		if(max<x) max=x;
	}
	cout<<max-min;
	return 0;
}
