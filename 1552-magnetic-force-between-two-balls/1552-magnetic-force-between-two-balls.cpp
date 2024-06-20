class Solution {
public:
    // Function to find the maximum minimum distance between m balls
    int maxDistance(std::vector<int>& positions, int ballCount) {
        // Sort positions to facilitate binary search
        std::sort(positions.begin(), positions.end());
        
        // Initialize left and right bounds for binary search
        int left = 0, right = positions.back() - positions.front();
        
        // Perform binary search to find the maximum minimum distance
        while (left < right) {
            int middle = right - (right - left) / 2;
            
            // If the number of balls that can be placed with distance 'middle' is greater or equal to ballCount
            if (canPlaceBalls(positions, middle) >= ballCount) {
                left = middle; // Try for a larger minimum distance
            } else {
                right = middle - 1; // Reduce the minimum distance
            }
        }
        
        return left; // The largest minimum distance that can be achieved
    }

private:
    // Helper function to count the number of balls that can be placed with at least 'distance' apart
    int canPlaceBalls(const std::vector<int>& positions, int distance) {
        int ballCounter = 1; // Start by placing the first ball at the first position
        int currentPos = positions[0]; // The position of the last placed ball
        
        // Try to place the rest of the balls
        for (size_t i = 1; i < positions.size(); ++i) {
            // If the current position is at least 'distance' away from the last placed ball
            if (positions[i] - currentPos >= distance) {
                ballCounter++; // Place another ball here
                currentPos = positions[i]; // Update the position of the last placed ball
            }
        }
        
        return ballCounter; // Return the number of balls placed
    }
};
