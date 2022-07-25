//thanks to Bhalerao-2002
class SubrectangleQueries {
public:
    vector<vector<int>> rect;
    
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->rect = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int r = row1; r <= row2; r++){
            for(int c = col1; c <= col2; c++){
                rect[r][c] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return rect[row][col];
    }
};
