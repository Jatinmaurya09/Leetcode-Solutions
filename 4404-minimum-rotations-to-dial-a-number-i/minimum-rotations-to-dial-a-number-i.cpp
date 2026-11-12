class Solution {
public:
    int minRotations(string s) {
        int current = 0;
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            int next = s[i] - '0';
            int distance = abs(current - next);
            int rotations = min(distance, 10 - distance);
            total += rotations;
            current = next;
        }
        return total;
    }
};