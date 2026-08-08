/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),[](Interval& a,Interval& b){
            return a.start<b.start;
        });
        if(intervals.size()==1){
            return 1;
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto a:intervals){
            if(!pq.empty() && pq.top()<=a.start){
                pq.pop();
            }
            pq.push(a.end);
        }
        return pq.size();;
    }
};
