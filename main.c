#include "main.h"

int main(int argc, char* argv[] ) {
    int i;
    if (argc<2)
        fprintf(stderr, "files are missing\n");
    else {
        strcpy(filename, argv[0]);
        for (i = 1; i < argc; i++) {
            strcpy(input,argv[i]);
            strcat(input,".as");
            if((fp = fopen(input,"r"))==NULL)/*file dose not exist*/
                fprintf(stderr, "File not found\n");
                else{
                    firstrun();
                    secondrun();
                }

        }
    }
    exit(0);
}
