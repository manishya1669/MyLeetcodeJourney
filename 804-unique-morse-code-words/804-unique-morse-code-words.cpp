class Solution {
public:
     int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> dict{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ;
        
        set<string> set ;
        
        for( int i=0 ; i<words.size() ; i++ ){
            int word_size = words[i].length() ;
            string res = "" ;
            for( int j=0 ; j<word_size ; j++ ){
                res = res + dict[words[i][j]-'a'] ;
                cout<<res<<endl;
            }
            set.insert(res) ;
        }
        
        return set.size() ;
    }
};