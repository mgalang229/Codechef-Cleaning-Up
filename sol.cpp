#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		vector<int> indices(m);
		for (int i = 0; i < m; i++) {
			cin >> indices[i];
		}
		// create a 'cnt' variable to count the number of incomplete tasks
		int cnt = 0;
		vector<int> chef, assistant;
		for (int i = 1; i <= n; i++) {
			// create a boolean variable 'completed' to check if
			// the current task is completed or not
			bool completed = false;
			for (int j = 0; j < m; j++) {
				if (indices[j] == i) {
					completed = true;
					break;
				}
			}
			// if it is not yet completed, then add it the task list of Chef or his assistant
			if (!completed) {
				if (cnt % 2 == 0) {
					// if the 'cnt' is even then add it to Chef's tasks
					chef.emplace_back(i);
				} else {
					// otherwise, add to it to his assistant's tasks
					assistant.emplace_back(i);
				}
				// increment the counter
				cnt++;
			}
		}
		// print the tasks of Chef
		for (auto x : chef) {
			cout << x << " ";
		}
		cout << '\n';
		// print the tasks of his assistant
		for (auto x : assistant) {
			cout << x << " ";
		}
		cout << '\n';
	}
	return 0;
}
