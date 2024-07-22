#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int r, c;

    bool valid(int i, int j, vector<vector<int>>& image, int startColor) {
        return i >= 0 && j >= 0 && i < r && j < c && image[i][j] == startColor;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        r = image.size();
        c = image[0].size();
        int startColor = image[sr][sc];
        if (startColor == color) return image; 
        
        queue<pair<int, int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;

        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            // Check all four possible directions
            if (valid(i - 1, j, image, startColor)) { // Up
                image[i - 1][j] = color;
                q.push({i - 1, j});
            }
            if (valid(i + 1, j, image, startColor)) { // Down
                image[i + 1][j] = color;
                q.push({i + 1, j});
            }
            if (valid(i, j - 1, image, startColor)) { // Left
                image[i][j - 1] = color;
                q.push({i, j - 1});
            }
            if (valid(i, j + 1, image, startColor)) { // Right
                image[i][j + 1] = color;
                q.push({i, j + 1});
            }
        }

        return image;
    }
};
