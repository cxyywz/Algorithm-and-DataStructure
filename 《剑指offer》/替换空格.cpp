class Solution {
public:
	void replaceSpace(char *str,int length) {
        int old_num = 0,new_num = 0,k = 0,num_blank = 0;
        while(str[k] != '\0'){
            if(str[k] == ' ')
                ++num_blank;
            ++k;
            ++old_num;
        }
        new_num = old_num + 2*num_blank;
        if (new_num > length)
            return;
        int i = old_num,j = new_num;
        while(i >= 0){
            if(str[i] == ' '){
                str[j--] = '0';
                str[j--] = '2';
                str[j--] = '%';
            }
            else
                str[j--] = str[i];
            i--;
        }
	}
};
