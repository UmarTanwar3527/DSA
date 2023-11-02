#include <bits/stdc++.h>
using namespace std;

// Function to split a string by space and return a vector of tokens
vector<string> split(const string &s) {
    vector<string> tokens;
    istringstream iss(s);
    string token;
    while (iss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    unordered_map<int, int> snakes, ladders;
    queue<pair<int, int>> q;
    vector<int> dieInputs(n);

    // Read the snake and ladder positions
    for (int i = 0; i < 2 * n; i++) {
        string line;
        getline(cin, line);
        vector<string> tokens = split(line);
        int pos = stoi(tokens[0].substr(1));
      
        if (tokens[0][0] == 'S') {
            snakes[pos] = stoi(tokens[1]);
        } else {
            ladders[pos] = stoi(tokens[1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> dieInputs[i];
    }

    q.push({1, 0});

    while (!q.empty()) {
        int position = q.front().first;
        int moves = q.front().second;
        q.pop();

        if (position == 100) {
            cout << "Possible " << moves << endl;
            return 0;
        }

        for (int die = 1; die <= 6; die++) {
            int nextPos = position + die;

            if (ladders.find(nextPos) != ladders.end()) {
                nextPos = ladders[nextPos];
            } else if (snakes.find(nextPos) != snakes.end()) {
                nextPos = snakes[nextPos];
            }

            if (nextPos <= 100) {
                q.push({nextPos, moves + 1});
            }
        }
    }

    cout << "Not possible" << endl;

    return 0;
}
