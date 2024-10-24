#include <iostream>
#include <vector>
using namespace std;

void NGE(vector<int> a) {
	for (int i = 0; i < a.size(); i++) {
		if (i == a.size() - 1) {
			cout << a[i] << " --> " << -1 << endl;
			break;
		}
		for (int j = i + 1; j < a.size(); j++) {
			if (a[i] < a[j]) {
				cout << a[i] << " --> " << a[j] << endl;
				break;
			}
		}
	}
}

int main() {
	vector<int> arr;
	int n, tmp;
	cout << "How many elements in this array? ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	NGE(arr);
}
