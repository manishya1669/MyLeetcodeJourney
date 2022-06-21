class Solution {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
public:
    string reverseVowels(string s) {
        
        
        unordered_map<char,int>umap;
        string str = "aeiouAEIOU";
        for(auto x:str){
            umap[x]++;
        }
        
        int i =0;
        int j = s.length();
        while(i<j){
            if(umap[s[i]] == 1 && umap[s[j]] == 1){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(umap[s[i]] !=1  && umap[s[j] != 1]){
                j--;
                i++;
            }
            else if(umap[s[i]] ==1){
                j--;
            }
            else{
                i++;
            }
        }
        return s;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         unordered_map<char,int>umap = {
//             {'a',1},
//             {'e',1},
//             {'i',1},
//             {'o',1},
//             {'u',1},
//             {'A',1},
//             {'E',1},
//             {'I',1},
//             {'O',1},
//             {'U',1},
           
//         };
       
//         int i =0;
//         int j = s.length()-1;
//        while(i<j){
//            if(umap.find(s[i]) != umap.end() && umap.find(s[j]) != umap.end()){
//                swap(s[i],s[j]);
//                i++;
//                j--;
//            }
//            else if(umap.find(s[i]) != umap.end() && umap.find(s[j]) ==umap.end()){
//                j--;
//            }
//            else if(umap.find(s[j]) != umap.end() && umap.find(s[i]) == umap.end()){
//                i++;
//            }
//        //     else{
//        //         i++;
//        //         j--;
//        //     }
//        // }
//        //  return s;
    }
};