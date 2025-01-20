#include <iostream>
#include <cstring>

const int ALPHABET_SIZE = 26;

struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];
    bool isLeaf;
};

class Solution {
public:
    //Function to insert string into TRIE.
    void insert(struct TrieNode *root, std::string key) {
        TrieNode* node = root;
        for (char ch : key) {
            int index = ch - 'a';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->isLeaf = true;
    }

    //Function to use TRIE data structure and search the given string.
    bool search(struct TrieNode *root, std::string key) {
        TrieNode* node = root;
        for (char ch : key) {
            int index = ch - 'a';
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return node != nullptr && node->isLeaf;
    }
};

// Example usage:
int main() {
    Solution trieSolution;

    // Initialize the Trie
    TrieNode* root = new TrieNode();
    memset(root->children, 0, sizeof(root->children));

    // Insert words into the Trie
    trieSolution.insert(root, "apple");
    trieSolution.insert(root, "banana");
    trieSolution.insert(root, "orange");
    trieSolution.insert(root, "app");
    trieSolution.insert(root, "ban");

    // Search for words in the Trie
    std::cout << trieSolution.search(root, "apple") << std::endl;    // Output: 1 (true)
    std::cout << trieSolution.search(root, "app") << std::endl;      // Output: 1 (true)
    std::cout << trieSolution.search(root, "orange") << std::endl;   // Output: 1 (true)
    std::cout << trieSolution.search(root, "grape") << std::endl;    // Output: 0 (false)

    // Clean up memory (optional)
    // Note: In a real-world scenario, consider using smart pointers or a more robust memory management approach.
    delete root;

    return 0;
}
