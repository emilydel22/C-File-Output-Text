#include <stdio.h>
#include <time.h>
#include <direct.h>   /* Windows-only, to get working directory */

int main(void)
{
    time_t rawtime = time(NULL);
    FILE *fp;
    int i = 5;
    char *str = "String #0 for Emily D. Delgado Gonzalez\n";

    char path[500];

    /* GET THE REAL FOLDER WHERE CODEBLOCKS RUNS YOUR PROGRAM */
    _getcwd(path, sizeof(path));
    printf("Your program is running in:\n%s\n\n", path);

    /* CREATE test.txt IN THAT EXACT FOLDER */
    fp = fopen("test.txt", "w+");
    if (!fp)
    {
        printf("Could not create test.txt here.\n");
        getchar();
        return 1;
    }

    fprintf(fp, "This is testing for fprintf.\n");
    fprintf(fp, "This is testing for fputs.\n");
    fprintf(fp, "This is a string number %d.\n", i);

    for (i = 1; i < 12; i++)
        fprintf(fp, str, i);

    fprintf(fp, "Run on this date %s", ctime(&rawtime));

    fclose(fp);

    printf("SUCCESS: test.txt created in this directory.\n");
    printf("Go to this exact folder in File Explorer:\n%s\n\n", path);
    printf("Press Enter to close...\n");
    getchar();
    getchar();

    return 0;
}
