#include <iostream>
#include <queue>
using namespace std;

void interQ(queue<int> q) {
	queue<int> frt_q;
	queue<int> bk_q;
	int i = 0;
	int s = q.size();
	while (!q.empty()) {
		if (i < s / 2) {
			frt_q.push(q.front());
			q.pop();
		}
		else {
			bk_q.push(q.front());
			q.pop();
		}
		i++;
	}

	cout << "Interleaved Queue: " << endl;
	while (!frt_q.empty()) {
		cout << frt_q.front() << ' ';
		cout << bk_q.front() << ' ';
		frt_q.pop();
		bk_q.pop();
	}
}

int main() {
	queue<int> q;
	int e, tmp;
	cout << "How many elements in this queue? ";
	cin >> e;
	cout << "Enter the elements: " << endl;
	for (int i = 0; i < e; i++) {
		cin >> tmp;
		q.push(tmp);
	}
	interQ(q);
}
