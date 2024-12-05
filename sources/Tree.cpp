#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/Constants.h"
#include "../headers/Tree.h"

Node* NewNode()
{
    Node* node = (Node*)calloc(1, sizeof(Node));
    node->data = (char*)calloc(MaxLength, sizeof(char));

    return node;
}

Node* NewRoot()
{
    Node* root = NewNode();

    return root;
}

Tree* NewTree()
{
    Tree* tree   = (Tree*)calloc(1, sizeof(Tree));

    tree->root   = NewRoot();
    tree->height = 1;

    return tree;
}

void PutFileToTree(File_t* file)
{
    FILE* fr = fopen(file->file_name, "r");

    for (size_t i = 0; i < file->str_num; i++)
    {
        file->lines[i][file->lineslen[i]] = '\0';
    }

    for (size_t i = 0; i < file->str_num; i++)
    {
        char* word = (char*)calloc(file->lineslen[i] + 1, sizeof(char));

        sscanf(file->lines[i], "%s", word);

        if (strcmp(word, "{") == 0 && i == 0)
        {
             NewRoot();
        }

        free(word);
    }

    fclose(fr);
}

void DestructNode(Node* node)
{
    free(node->data);
    free(node);
}
