#include <iostream>
#include <vector>
using namespace std;

void CheckWindow(vector<int> a, int k) {
	for (int i = 0; i < a.size() - 1; i++) {
		int neg = 0;
		cout << "{";
		for (int j = i; j < k + i; j++) {
			cout << a[j];
			if (j != k + i - 1) cout << ", ";
			if (neg == 0 && a[j] < 0) neg = a[j];
		}
		cout << "} = " << neg << endl;
	}
}

int main() {
	vector<int> arr;
	int e, tmp;
	int k;
	cout << "How many elements in this array? ";
	cin >> e;
	cout << "k = ";
	cin >> k;
	cout << "Enter the elements: " << endl;
	for (int i = 0; i < e; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	CheckWindow(arr, k);
}
