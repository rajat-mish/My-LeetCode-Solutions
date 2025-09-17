class FoodRatings {
public:
    unordered_map<string, string> foodToCuisine;
    unordered_map<string, int> foodToRating;
    map<string, set<pair<int, string>>> cuisineToRatings;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); i++) {
            string food = foods[i];
            string cuisine = cuisines[i];
            int rating = ratings[i];

            foodToCuisine[food] = cuisine;
            foodToRating[food] = rating;
            // Use -rating to simulate max-heap behavior in set
            cuisineToRatings[cuisine].insert({-rating, food});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = foodToCuisine[food];
        int oldRating = foodToRating[food];
        // Remove old entry
        cuisineToRatings[cuisine].erase({-oldRating, food});
        // Insert new rating
        cuisineToRatings[cuisine].insert({-newRating, food});
        // Update rating map
        foodToRating[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        // First element in set is highest rated due to -rating
        return cuisineToRatings[cuisine].begin()->second;
    }
};
