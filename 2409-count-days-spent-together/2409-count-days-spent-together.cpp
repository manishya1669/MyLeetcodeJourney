class Solution {
public:
    int noOfdays(string &s){
        int Month= stoi(s.substr(0,2));
        int day  = stoi(s.substr(3));
        vector<int>days={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i =0;i<Month;i++){
            day+=days[i];
        }
        return day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int arrivaltime= max(noOfdays(arriveAlice),noOfdays(arriveBob));
        int departuretime= min(noOfdays(leaveAlice),noOfdays(leaveBob));
        if(departuretime-arrivaltime+1 >0)return (departuretime-arrivaltime+1);
        return 0;
    }
};