#ifndef TREE_H
#define TREE_H

struct Node
{
    struct Node* left;
    struct Node* right;
    char* data;
    char* definition;
};

struct Tree
{
    struct Node* root;
    int height; // глубина
};

struct File_t
{
    const char* file_name;
    size_t file_size;
    size_t str_num;
    char* buffer;
    char** lines;
    size_t* lineslen;
};

Node* NewNode();
Node* NewRoot();
Tree* NewTree();
void PutFileToTree(File_t* file);
void DestructNode(Node* node);

#endif
