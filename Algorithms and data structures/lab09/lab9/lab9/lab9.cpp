#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <tuple>
#include <stdexcept>
#include <memory>
#ifdef _WIN32
#include <windows.h>
#else
#include <locale.h>
#endif
using namespace std;

struct node {
    char data{};
    node* left = nullptr;
    node* right = nullptr;
    node* parent = nullptr;
    string color;
};
char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
class RedBlackTree {
    char* array;
    node* root;
    int i = 0;

public:
    RedBlackTree() : root(nullptr) {
        array = new char[1000];
    }

    node* GetRoot() { return root; }

    void InsertNode(char stuff) {
        if (root == nullptr) {
            root = new node();
            root->data = stuff;
            root->parent = nullptr;
            root->color = "BLACK";
            cout << "Element inserted.\n";
            array[i] = root->data;
        }
        else {
            auto linker = GetRoot();
            node* newnode = new node();
            newnode->data = stuff;

            while (linker != nullptr) {
                if (linker->data > stuff) {
                    if (linker->left == nullptr) {
                        linker->left = newnode;
                        newnode->color = "RED";
                        newnode->parent = linker;
                        cout << "Element inserted.\n";
                        break;

                    }
                    else { linker = linker->left; }
                }
                else {
                    if (linker->right == nullptr) {
                        linker->right = newnode;
                        newnode->color = "RED";
                        newnode->parent = linker;
                        cout << "Element inserted.\n"; break;
                    }
                    else { linker = linker->right; }
                }
            }
            RB_Insert_Fixup(newnode);
        }
    }

    void RB_Insert_Fixup(node* z) {
        while (z->parent->color == "RED") {
            auto grandparent = z->parent->parent;
            auto uncle = GetRoot();
            if (z->parent == grandparent->left) {
                if (grandparent->right) { uncle = grandparent->right; }
                if (uncle->color == "RED") {
                    z->parent->color = "BLACK";
                    uncle->color = "BLACK";
                    grandparent->color = "RED";
                    if (grandparent->data != root->data) { z = grandparent; }
                    else { break; }
                }
                else if (z == grandparent->left->right) {
                    LeftRotate(z->parent);
                }
                else {
                    z->parent->color = "BLACK";
                    grandparent->color = "RED";
                    RightRotate(grandparent);
                    if (grandparent->data != root->data) { z = grandparent; }
                    else { break; }
                }
            }
            else {
                if (grandparent->left) { uncle = grandparent->left; }
                if (uncle->color == "RED") {
                    z->parent->color = "BLACK";
                    uncle->color = "BLACK";
                    grandparent->color = "RED";
                    if (grandparent->data != root->data) { z = grandparent; }
                    else { break; }
                }
                else if (z == grandparent->right->left) {
                    RightRotate(z->parent);
                }
                else {
                    z->parent->color = "BLACK";
                    grandparent->color = "RED";
                    LeftRotate(grandparent);
                    if (grandparent->data != root->data) { z = grandparent; }
                    else { break; }
                }
            }
        }
        root->color = "BLACK";
    }

    node* TreeSearch(char stuff) {
        auto temp = GetRoot();
        if (temp == nullptr) { return nullptr; }

        while (temp) {
            if (stuff == temp->data) { return temp; }
            else if (stuff < temp->data) { temp = temp->left; }
            else { temp = temp->right; }
        }
        return nullptr;
    }

    void LeftRotate(node* x) {
        node* nw_node = new node();
        if (x->right->left) { nw_node->right = x->right->left; }
        nw_node->left = x->left;
        nw_node->data = x->data;
        nw_node->color = x->color;
        x->data = x->right->data;

        x->left = nw_node;
        if (nw_node->left) { nw_node->left->parent = nw_node; }
        if (nw_node->right) { nw_node->right->parent = nw_node; }
        nw_node->parent = x;

        if (x->right->right) { x->right = x->right->right; }
        else { x->right = nullptr; }

        if (x->right) { x->right->parent = x; }
    }

    void RightRotate(node* x) {
        node* nw_node = new node();
        if (x->left->right) { nw_node->left = x->left->right; }
        nw_node->right = x->right;
        nw_node->data = x->data;
        nw_node->color = x->color;

        x->data = x->left->data;
        x->color = x->left->color;

        x->right = nw_node;
        if (nw_node->left) { nw_node->left->parent = nw_node; }
        if (nw_node->right) { nw_node->right->parent = nw_node; }
        nw_node->parent = x;

        if (x->left->left) { x->left = x->left->left; }
        else { x->left = nullptr; }

        if (x->left) { x->left->parent = x; }
    }

    void PreorderTraversal(node* temp) {
        if (!temp) { return; }
        cout << "--> " << temp->data << "<" << temp->color << ">";
        PreorderTraversal(temp->left);
        PreorderTraversal(temp->right);
    }

    void PostorderTraversal(node* temp) {
        if (!temp) { return; }
        PostorderTraversal(temp->left);
        PostorderTraversal(temp->right);
        cout << "--> " << temp->data << "<" << temp->color << ">";
    }

    node* findVowel(node* temp) {
        if (!temp) { return nullptr; }
        for (int i = 0; i < 5; ++i) {
            if (vowels[i] == temp->data) { return temp; }
        }
        auto result = findVowel(temp->left);
        if (result) { return result; }
        result = findVowel(temp->right);
        if (result) { return result; }
    }

};
void printTree(RedBlackTree& tree) {
    auto temp = tree.GetRoot();
    int count = 1;
    if (temp == nullptr) { return; }
    while (temp) {
        if (temp->data) {
            cout << temp->data << " - r" << endl;
            if (temp->left) {
                cout << temp->left->data << " - l" << endl;
            }
            if (temp->right) {
                cout << temp->right->data << " - r" << endl;
            }
        }
        temp = temp->left;
    }
}
#define LN { std::cout << __LINE__ << std::endl; }
#define DEB(x) { std::cout << #x << "=(" << (x) << ") "; }
static std::string ch_hor = "-", ch_ver = "|", ch_ddia = "/", ch_rddia = "\\", ch_udia = "\\", ch_ver_hor = "|-", ch_udia_hor = "\\-", ch_ddia_hor = "/-", ch_ver_spa = "| ";
//static std::string ch_hor = "\u2500" /*─*/, ch_ver = "\u2502" /*│*/, ch_ddia = "\u250C" /*┌*/, ch_rddia = "\u2510" /*┐*/, ch_udia = "\u2514" /*└*/, ch_ver_hor = "\u251C\u2500" /*├─*/, ch_udia_hor = "\u2514\u2500" /*└─*/, ch_ddia_hor = "\u250C\u2500" /*┌─*/, ch_ver_spa = "\u2502 " /*│ */;
void dump3(node* root, int space = 0) {
    if (!root)
        return;
    enum { COUNT = 2 };
    space += COUNT;
    dump3(root->right, space);
    for (int i = COUNT; i < space; ++i)
        std::cout << "  ";
    std::cout << root->data << std::endl;
    dump3(root->left, space);
}

void dump0( node const* node1, std::string const& prefix = "", bool root = true, bool last = true) {
    std::cout << prefix << (root ? "" : (last ? ch_udia_hor : ch_ver_hor)) << (node1 ? std::to_string(node1->data) : "") << std::endl;
    if (!node1 || (!node1->left && !node1->right))
        return;
    std::vector<node*> v{ node1->left, node1->right };
    for (size_t i = 0; i < v.size(); ++i)
        dump0(v[i], prefix + (root ? "" : (last ? "  " : ch_ver_spa)), false, i + 1 >= v.size());
}
void menu() {
    cout << "\n__________________________________________";
    cout << "\n\n  *****Working with Red-Black-Tree******";
    cout << "\n__________________________________________";
    cout << "\n\n1. Enter N key element";
    cout << "\n2. Enter M key element";
    cout << "\n3. Exit.";
    cout << "\n__________________________________________";
    cout << "\nPlease, select option -- ";
}


int main() {
    RedBlackTree demo;
    int option;
    char input;
    menu();
    cin >> option;
    while (option != 4) {
        switch (option) {
        case 1: {
            cout << "\nElement to be inserted -- ";
            cin >> input; demo.InsertNode(input);
            auto result = demo.findVowel(demo.GetRoot());
            if(result) {
                cout << "Vowel character: " << result->data << ". Color: " << result->color;
                if (result->left) { cout << "\nLeft node: " << result->left->data << ". Left node color: " << result->left->color; }
                else { cout << "\nLeft node was not found"; }
                if (result->right) { cout << "\nRight node: " << result->right->data << ". Right node color: " << result->right->color; }
                else { cout << "\nRight node was not found"; }
            }
            else {
                cout << "Vowel character was not found";
            }
            break;
        }
        case 2: {
            cout << "\nElement to be searched -- ";
            cin >> input;
            auto result = demo.TreeSearch(input);
            if (result) { 
                cout << "\nElement found: " << result->data << " Color: " << result->color;
                if (result->left) { cout << "\nLeft node: " << result->left->data << ". Left node color: " << result->left->color; }
                else { cout << "\nLeft node was not found"; }
                if (result->right) { cout << "\nRight node: " << result->right->data << ". Right node color: " << result->right->color; }
                else { cout << "\nRight node was not found"; }
                if (result->parent) { cout << "\nParent node: " << result->parent->data << ". Parent node color: " << result->parent->color; }
                else { cout << "\nParent node was not found"; }
            }
            else { cout << "\nElement was not found"; }
            break;
        }
        case 3: {
           dump0(demo.GetRoot());
        }

        default: cout << "Wrong Choice.\n";
        }
        cout << "\nAnything Else?";
        cin >> option;
    }
    cout << "\nTerminating.... ";
    return 0;
}