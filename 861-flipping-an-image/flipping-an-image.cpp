class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for(int i = 0; i < n; i++) {
            int k = image[i].size();

           
            for(int j = 0; j < k/2; j++) {
                swap(image[i][j], image[i][k-1-j]);
            }

            
            for(int j = 0; j < k; j++) {
                image[i][j] = 1 - image[i][j];
            }
        }

        return image;
    }
};