
class Solution {
  public:
    bool isPatternPresent(string& txt, string& pat) {
        bool start = false, end = false;

        if (pat[0] == '^') {
            start = true;
            pat = pat.substr(1);
        }

        if (!pat.empty() && pat.back() == '$') {
            end = true;
            pat.pop_back();
        }

        int n = txt.size(), m = pat.size();

        if (start && end)
            return n >= m &&
                   txt.compare(0, m, pat) == 0 &&
                   txt.compare(n - m, m, pat) == 0;

        if (start)
            return txt.find(pat) == 0;

        if (end)
            return n >= m && txt.compare(n - m, m, pat) == 0;

        return txt.find(pat) != string::npos;
    }
};
