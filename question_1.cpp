#include <iostream>
#include <stack>
using namespace std;

void PrintStack(stack<int> st) {
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}

stack<int> reversed_st;

stack<int> Reverse(stack<int> st) {
	int value;
	if (!st.empty()) {
		value = st.top();
		reversed_st.push(value);
		st.pop();
		return Reverse(st);
	}
	return reversed_st;
}

int main() {
	int tmp;
	int n;
	stack<int> st;
	cout << "How many elements in the stack? ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		st.push(tmp);
	}
	cout << "Original Stack: ";
	PrintStack(st);
	Reverse(st);
	cout << "Reversed Stack: ";
	PrintStack(reversed_st);
}
