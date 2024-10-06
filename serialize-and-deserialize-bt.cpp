/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.

    string serialize(TreeNode* root) {

        static str = "" ;

        if(root == NULL){
            return str;
        }

        str += to_string(root->val) ;

        str+= "(";
        serialize(root->left);
        str+= ")(";
        serialize(root->right);
        str+=")";

        return str ;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

        static i = 0 ;

        if(data[i] == ')'){
            return NULL ;
        }

        

        
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));