/* По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

Входные данные

На вход подается 1 строка без пробелов.

Выходные данные

Необходимо вывести yes, если строка является палиндромом, и no в противном случае.*/

#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const char *first, const char *last) {
    if (first < last) {
        if (*first != *last) {
            return false;
        }
        return is_palindrome(first + 1, last - 1);
    }

    return true;
}

int main() {
    string s;

    cin >> s;

    if (is_palindrome(&s[0], &s[s.size() - 1])) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}
