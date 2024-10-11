class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        // Extract target friend's arrival time
        int targetArrival = times[targetFriend][0];
        int n = times.size();
        
        // Add index to each friend's arrival and departure times for tracking
        for (int i = 0; i < n; ++i) {
            times[i].push_back(i);
        }
        
        // Sort the times based on arrival time
        sort(times.begin(), times.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0]; // Sort by arrival times
        });

        // Min-heap to track available chairs (smallest chair comes out first)
        priority_queue<int, vector<int>, greater<int>> availableChairs;
        for (int i = 0; i < n; ++i) {
            availableChairs.push(i); // Initially all chairs are available
        }
        
        // Min-heap to track when friends leave (based on departure time)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> leaving;

        // Process each friend's arrival in order
        for (int i = 0; i < n; ++i) {
            int arrival = times[i][0];
            int departure = times[i][1];
            int friendIndex = times[i][2];
            
            // Free chairs of friends who have already left
            while (!leaving.empty() && leaving.top().first <= arrival) {
                availableChairs.push(leaving.top().second); // Releasing chair
                leaving.pop();
            }
            
            // Assign the smallest available chair
            int chair = availableChairs.top();
            availableChairs.pop();

            // If this is the target friend, return the chair number
            if (friendIndex == targetFriend) {
                return chair;
            }
            
            // Push the friend's departure time and assigned chair into the leaving queue
            leaving.push({departure, chair});
        }
        
        return -1; // Should never reach here
    }
};

