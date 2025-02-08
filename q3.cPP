#include <iostream>
using namespace std;

int isPalindrome(string sample) {
    int left = 0, right = sample.length() - 1;

    while (left < right) {
        if (sample[left] != sample[right]) {
            return false;  
        }
        left++;
        right--;
    }
    return true;  
}

void frequency(string sample) {
    int freq[256] = {0};  

    for (char ch : sample) {
        freq[ch]++;
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << "'" << char(i) << "' -> " << freq[i] << " times\n";
        }
    }
}
void replacevowel(string sample){
        for (char &ch : sample) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            ch = '*';
        }
        }
        cout<<sample;
}

int main() {
    string sample;  
    cout << "Enter a string: ";  
    getline(cin, sample);

    if (isPalindrome(sample))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    frequency(sample);
    replacevowel(sample);

    return 0;
}
