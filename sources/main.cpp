#include <stdio.h>
#include <stdlib.h>
#include "../headers/Akinator.h"
#include "../headers/Constants.h"
#include "../headers/GraphDump.h"
#include "../headers/ReadFromFile.h"
#include "../headers/Tree.h"

int main()
{
    const char* file_tree_name = "Tree.txt";

    File_t file    = {};
    //Tree   tree    = {};

    file.file_name = file_tree_name;

    Put_file_to_structure(&file);

    //NewTree(&tree);

    FreeFile(&file);

    return 0;
}
