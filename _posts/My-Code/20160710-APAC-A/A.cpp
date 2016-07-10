#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
#include<stack>
#include<queue>
#include<limits.h>
#include<numeric>
#include<cstring>
#include<map>
#include<set>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cctype>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<string>
#include<cstdlib>
#include<queue>
#include<cmath>
#include<iomanip>
#include<climits>
#include<fstream>
#include<unordered_set>
#include<unordered_map>
#include<functional>
#include<string.h>

using namespace std;

void solution() {
	int nums = 0;
	int max_nums = 0;
	string max_name = "";
	scanf("%d", &nums);
	getchar();
	for (int i = 0; i < nums; ++i) {
		string name;
		getline(cin, name);

		set<char> name_chars;
		for (int j = 0; j < name.size(); ++j) {
			if (name[j] != ' ') name_chars.insert(name[j]);
		}
		//cout <<name << endl;
		//cout << name_chars.size() << endl;
		//cout << max_nums << endl;
		if (name_chars.size() > max_nums) {
			max_nums = name_chars.size();
			max_name = name;
		}
		else if (name_chars.size() == max_nums) {
			int k = 0, l = 0;
			while (k < name.size() && l < max_name.size()) {
				if (name[k] == ' ' && max_name[l] == ' ') {
					k++; l++;
				}
				else if (name[k] == max_name[l]) {
					k++; l++;
				}
				else if (name[k] == ' ' && max_name[l] != ' ') {
					break;
				}
				else if (name[k] != ' ' && max_name[l] == ' ') {
					max_name = name;
					max_nums = name.size();
				}
				else if (name[k] < max_name[l]) {
					max_name = name;
					max_nums = name_chars.size();
					break;
				}
				else {
					break;
				}
			}
		}
	}
	cout << max_name << endl;

}

int main() {
	//freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	freopen("A-small-attempt2.in", "r", stdin);
	freopen("A-small-attempt2.out", "w", stdout);
	int T = 0;
	scanf("%d", &T);
	for (int i = 1; i <= T; ++i) {
		printf("Case #%d: ", i);
		//printf("Case #%d:\n", i);
		solution();
	}
	fclose(stdin);
	fclose(stdout);

	return 0;
}

