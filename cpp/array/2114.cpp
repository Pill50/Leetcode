class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = -1, l = sentences.size();
        for(int i = 0; i < l; i++){
            int s = 0;
            stringstream ss(sentences[i]);
            string word;
            while(ss >> word){
                s++;
            }
            if(s > max) max = s;
        }
        return max;
    }
};
