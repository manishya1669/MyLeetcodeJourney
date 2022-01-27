class Solution 
{
public:
    string toBinary(int n)
    {
        string r;
        while ( n != 0 ) {
            r = ( n % 2 == 0 ? "0" : "1" ) + r;
            n /= 2;
        }
        return string(31-r.length(),'0') + r;
    }
    
    int toInt( string s ) 
    {
        int result = 0;
        int exp = 0;
        for ( int i=s.length()-1; i>=0; i-- ) {
            result += (s[i]-'0') * pow(2, exp++);
        }
        return result;
    }
    
    class Node 
    {
    public:
        char val;
        Node* child[2];
        bool isEnd;
        
        Node( char value ) {
            val = value;
            child[0] = NULL;
            child[1] = NULL;
        }
    };
    
    Node* root = new Node(' ');
    
    void insertInTrie( string word )
    {   
        Node* cur = root;
        for ( char ch : word ) {
            if ( cur == NULL || cur->child[ch-'0'] == NULL ) {
                cur->child[ch-'0'] = new Node(ch);
            }
            cur = cur->child[ch-'0'];
        }
        cur->isEnd = true;
    }
    
    int xorval ( string number ) 
    {
        Node* cur = root;
        string result = "";
        for ( char ch : number ) {
            if ( ch == '0' && cur->child[1] ) {
                result += '1';
                cur = cur->child[1];
            }
            else if ( ch == '1' && cur->child[0] ) {
                result += '1';
                cur = cur->child[0];
            }
            else {
                result += '0';
                cur = cur->child[ch-'0'];
            }
        }
        return toInt(result);
    }
    
    int findMaximumXOR(vector<int>& nums) 
    {
        for ( int n : nums ) {
            insertInTrie(toBinary(n));
        }
        int maxXor = INT_MIN;
        for ( int n : nums ) {
            int curXor = xorval(toBinary(n));
            maxXor = max(curXor, maxXor);
        }
        return maxXor;
    }
};