#include <iostream>
#include <string>

using namespace std;

template<typename T>
class node {
private:
    T Data = 0;
    node *left = nullptr, *right = nullptr;
public:
//    node(T);

    node *insert(T, node *&);

    node *find(node *root, T);

    int size(node *root);

    node *Print(node *root);
};

//template<class T>
//node<T>::node(T val){
//
//}

template<class T>
node<T> *node<T>::insert(T aData, node *&aRoot) {
    if (aRoot == nullptr) {
        aRoot = new node;
        aRoot->Data = aData;
        aRoot->left = nullptr;
        aRoot->right = nullptr;
    }
    if (aRoot->Data > aData) {
        insert(aData, aRoot->left);
    } else if (aRoot->Data < aData) {
        insert(aData, aRoot->right);
    }
    return aRoot;
}

template<class T>
node<T> *node<T>::find(node *root, T add) {
    if (root == nullptr){
        cout << "No" << endl;
        return root;
    } else if (root->Data == add){
        cout << "Yes" << endl;
        return root;
    }

    if (root->Data < add) {
        return find(root->right, add);
    } else if (root->Data > add)
        return find(root->left, add);

    return root;
}

template<class T>
int node<T>::size(node *root) {
    if (root == nullptr)
        return 0;
    else
        return (size(root->left) + 1 + size(root->right));
}

template<class T>
node<T> *node<T>::Print(node *root) {
    if (!root)
        return root;
    else {
        Print(root->left);
        cout << root->Data << ' ';
        Print(root->right);
    }
    return root;
}

int main() {
    node<int> *Root = nullptr;
    int num;
    cin >> num;
    string line;
    int val = 0;
    for (int i = 0; i < num; i++) {
        cin >> line;
        if (line == "insert") {
            cin >> val;
            Root->insert(val, Root);
        } else if (line == "contains") {
            cin >> val;
            Root->find(Root, val);
        } else if (line == "size") {
            cout << Root->size(Root) << endl;
        } else if (line == "print") {
            Root->Print(Root);
            cout << endl;
        }
    }
}

