class Solution {
public:
    bool isPalindrome(string s) {
        std::vector<char> s_buff(s.begin(), s.end());

        for (int i = 0; i < s_buff.size();) {
            if (!std::isalpha(static_cast<unsigned char>(s_buff[i])) && !std::isdigit(static_cast<unsigned char>(s_buff[i]))) 
            {
                s_buff.erase(s_buff.begin() + i); 
            } 
            else 
            {
                i++ ;
            }
        }

        for(int i = 0; i < (s_buff.size() / 2); i++)
        {
            if (tolower(s_buff[i]) != tolower(s_buff[s_buff.size() - 1 - i]))
            {
                return false;
            }
        }
        return true;
    }
};