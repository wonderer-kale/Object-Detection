#include <iostream>
#include <vector>
using namespace std;
int main() {
	string s;
	int lines;
	while (true) {
		cout << "Total lines: ";
		cin >> lines;
		vector< vector <char> > m(lines);
		cin.ignore();
		for (int i = 0; i < lines; i++) {
			getline(cin, s);
			m[i] = vector<char>(0);
			m[i].push_back(s[0]);
			if (s[1] == '=' && s[2] == '=' && s[0] != ' ')
				m[i].push_back(' ');
			else if (s[1] == '=' && s[2] != '=' && s[0] != ' ' && s[0] != '=' && s[0] != '!' && s[0] != '+' && s[0] != '-' && s[0] != '>' && s[0] != '<')
				m[i].push_back(' ');
			else if (s[1] == '!' && s[2] == '=' && s[0] != ' ')
				m[i].push_back(' ');
			else if (s[1] == '*' && s[2] == '*' && s[0] != ' ')
				m[i].push_back(' ');
			else if (s[1] == '/' && s[2] == '/' && s[0] != ' ')
				m[i].push_back(' ');
			else if (s[1] == '*' && s[2] != '*' && s[0] != ' ' && s[0] != '*')
				m[i].push_back(' ');
			else if (s[1] == '/' && s[2] != '/' && s[0] != ' ' && s[0] != '/')
				m[i].push_back(' ');
			else if (s[1] == '+' && s[0] != 'e' && s[0] != ' ')
				m[i].push_back(' ');
			else if (s[1] == '-' && s[0] != 'e' && s[0] != ' ')
				m[i].push_back(' ');
			else if (s[1] == '>' && s[0] != ' ')
				m[i].push_back(' ');
			else if (s[1] == '<' && s[0] != ' ')
				m[i].push_back(' ');


			for (int j = 1; j < int(s.length()); j++) {
				if (s[j - 1] == ',' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j - 1] == '=' && s[j] != '=' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j - 1] == '*' && s[j] != '*' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j - 1] == '/' && s[j] != '/' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j - 1] == '+' && s[j - 2] != 'e' && s[j] != ' ' && s[j] != '=')
					m[i].push_back(' ');
				else if (s[j - 1] == '-' && s[j - 2] != 'e' && s[j - 2] != '[' && s[j] != ' ' && s[j] != '=' && s[j] != '>')
					m[i].push_back(' ');
				else if (s[j - 1] == '>' && s[j] != ' ' && s[j] != '=')
					m[i].push_back(' ');
				else if (s[j - 1] == '<' && s[j] != ' ' && s[j] != '=')
					m[i].push_back(' ');

				m[i].push_back(s[j]);

				if (s[j + 1] == '=' && s[j + 2] == '=' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j + 1] == '=' && s[j + 2] != '=' && s[j] != ' ' && s[j] != '=' && s[j] != '!' && s[j] != '+' && s[j] != '-' && s[j] != '>' && s[j] != '<')
					m[i].push_back(' ');
				else if (s[j + 1] == '!' && s[j + 2] == '=' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j + 1] == '*' && s[j + 2] == '*' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j + 1] == '/' && s[j + 2] == '/' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j + 1] == '*' && s[j + 2] != '*' && s[j] != ' ' && s[j] != '*')
					m[i].push_back(' ');
				else if (s[j + 1] == '/' && s[j + 2] != '/' && s[j] != ' ' && s[j] != '/')
					m[i].push_back(' ');
				else if (s[j + 1] == '+' && s[j] != 'e' && s[j] != ' ')
					m[i].push_back(' ');
				else if (s[j + 1] == '-' && s[j] != 'e' && s[j] != ' ' && s[j] != '[')
					m[i].push_back(' ');
				else if (s[j + 1] == '>' && s[j] != ' ' && s[j] != '-')
					m[i].push_back(' ');
				else if (s[j + 1] == '<' && s[j] != ' ')
					m[i].push_back(' ');
			}
		}
		for (int k = 0; k < 100; k++)
			cout << "*";
		cout << "\n";
		for (int i = 0; i < lines; i++) {
			for (int j = 0; j < int(m[i].size()); j++) {
				cout << m[i][j];
			}
			cout << "\n";
		}
		for (int k = 0; k < 100; k++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}