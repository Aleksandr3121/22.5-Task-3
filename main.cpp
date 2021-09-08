#include <iostream>
#include <map>

using namespace std;

bool IsAnagram(const string& one, const string& two) {
    if (one.size() != two.size() || one.empty())return false;
    map<char, int> m_one, m_two;
    for (const char& c: one)m_one[c]++;
    for (const char& c: two)m_two[c]++;
    if (m_one == m_two)return true;
    else return false;
}

int main() {
    cout << boolalpha << IsAnagram("thing", "night");
    return 0;
}
