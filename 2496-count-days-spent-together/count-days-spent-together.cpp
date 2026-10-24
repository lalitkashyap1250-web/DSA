class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
        int ans = 0;

        for (int month = 1; month <= 12; month++) {
            for (int day = 1; day <= days[month - 1]; day++) {
                string date = "";

                if (month < 10) date += "0";
                date += to_string(month);
                date += "-";

                if (day < 10) date += "0";
                date += to_string(day);

                if (date >= arriveAlice && date <= leaveAlice &&
                    date >= arriveBob && date <= leaveBob) {
                    ans++;
                }
            }
        }
        return ans;
    }
};