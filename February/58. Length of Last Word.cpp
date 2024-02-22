

#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.empty()) // Check if the string is empty
            return 0;

        if (s.size() == 1 && s[0] != ' ') // Handle single non-space character
            return 1;

        int kount = 0;
        for (int i = s.size() - 1; i >= 0; i--) { // Start loop from the end of the string
            if (s[i] == ' ') {
                if (kount > 0) // If we have counted characters already, it means we found the last word
                    return kount;
            } else {
                kount++; // Increment count for non-space character
            }
        }
        return kount; // Return the length of the last word
    }
};
