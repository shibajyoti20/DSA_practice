#include<iostream>
using namespace std;

struct Node
{
    int val;
    struct Node *left,*right;
};

Node* newnode(int key){
    Node* temp = new Node;
    temp->val = key;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* insert(Node* root,int key){
    Node* newnd = newnode(key);

    Node* x = root;
    Node* y = NULL;
    while(x!=NULL){
        y=x;
        if(key<x->val){
            x=x->left;
        }
        else{
            x=x->right;
        }
    }

    if(y==NULL){
        y =  newnd;
    }

    else if(key<y->val){
        y->left = newnd;
    }
    else if(key>y->val){
        y->right = newnd;
    }

    return y;
}

void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    else{
        Inorder(root->left);
        cout<<root->val<<" ";
        cout<<endl;
        Inorder(root->right);

    }
}


//Search by calling recursion function.
Node* search(Node* root,int key){
    if(root==NULL || root->val==key) return root;

    if(root->val>key){
       return search(root->left,key);
    }
    return search(root->right,key);
}

Node* Findmin(Node* root){
    while(!root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key){
    if(root==NULL) return root;

    if(key>root->val) root->right = deleteNode(root->right,key);
    else if (key<root->val) root->left = deleteNode(root->left,key);
    
    else{
        if(!root->left && !root->right) {
            delete root;
            root = NULL;
        }

        else if(root->left){
            Node* tempLt = root;
            root = root->left;
            delete tempLt;
        }
        else if(root->right){
            Node* tempRt = root;
            root = root->right;
            delete tempRt;
        }
        else{
            Node* temp = Findmin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right,temp->val);
        }
    }
    return root;
}


int main(){

    Node* root = NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    Inorder(root);
    Node* res = search(root,70);
    cout<<"Element found"<<endl;
    cout<<res->val<<endl;

    deleteNode(root,20);
    cout<<"After deletion"<<endl;
    Inorder(root);
    return 0;
}
