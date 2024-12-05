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
    size_t* lineslen;
    char** lines;
};

Node* NewNode(char* data, char* definition);
Node* NewRoot(char* quality);
Tree* NewTree(File_t* file);
void PutFileToTree(File_t* file);
void DestructNode(Node* node);

#endif
