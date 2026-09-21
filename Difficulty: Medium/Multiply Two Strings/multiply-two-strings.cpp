class Solution {
public:
    string multiplyStrings(string &s1, string &s2) {

        bool neg = false;

        if (s1[0] == '-') {
            neg = !neg;
            s1 = s1.substr(1);
        }

        if (s2[0] == '-') {
            neg = !neg;
            s2 = s2.substr(1);
        }

        int i = 0;
        while (i < s1.size() - 1 && s1[i] == '0')
            i++;
        s1 = s1.substr(i);

        i = 0;
        while (i < s2.size() - 1 && s2[i] == '0')
            i++;
        s2 = s2.substr(i);

        if (s1 == "0" || s2 == "0")
            return "0";

        int n = s1.size();
        int m = s2.size();

        vector<int> res(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                int mul = (s1[i] - '0') * (s2[j] - '0');

                int pos2 = i + j + 1;
                int pos1 = i + j;

                int sum = mul + res[pos2];

                res[pos2] = sum % 10;
                res[pos1] += sum / 10;
            }
        }

        string ans;

        for (int x : res) {
            if (ans.empty() && x == 0)
                continue;

            ans += char(x + '0');
        }

        if (neg)
            ans = "-" + ans;

        return ans;
    }
};
