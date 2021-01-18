
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int size = sizeof(a) / sizeof(a[0]);


	for (int i = 0; i < size; i++) {
		a[a[i] % size]
			= a[a[i] % size] + size;
	}
	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < size; i++) {
		if (a[i] >= size * 2) {
			cout << i << " " << endl;
		}
	}
	return 0;
}



