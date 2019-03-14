class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int i = 0,j = array[0].size() - 1;
        while(i < array.size() && j >= 0){
            if(array[i][j] == target)
                return true;
            if(target > array[i][j])
                ++i;
            else
                --j;
        }
        return false;
    }
};
