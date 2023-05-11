class MySolution {
public:
    void reverseString(vector<char> &s) {
        for (int i = 0; i < (s.size() / 2); i++) {
            int lastIndex = s.size() - i - 1;
            
            char temp = s[i];
            s[i] = s[lastIndex];
            s[lastIndex] = temp;
        }
    }
};