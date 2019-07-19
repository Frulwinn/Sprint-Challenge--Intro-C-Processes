#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

/**
 * Main
 * If you want to test if your environment is set up correctly, 
 * compile and run the [testdir.c](examples/testdir.c) 
 * program in the `examples/` directory. 
 * (You can type `make` in the `examples/` directory.) 
 * It should print `Testing: PASS`.
 */

int main(int argc, char **argv)
{
  // Parse command line
  char *path;
  if (argc > 1) {
    path = argv[1];
    //fprintf(stderr, "Extra args. \n");
 
  } else {
    path = "./";
  }
  
  // Open directory
  DIR *directory = opendir(path);
  //checks for errors
  if (directory == NULL) {
    fprintf(stderr, "Cannot open directory.\n");
    exit (1);
  }

  // Repeatly read and print entries
  struct dirent *entries;
  struct stat buf;

    while ((entries = readdir(directory)) != NULL) {
      char *file_name = entries->d_name;
      //gets file size using file name
      stat(file_name, &buf);
      //prints size and name of file within directory entry
      printf("%10lld  %s\n", buf.st_size, file_name);
  }

  // Close directory
  closedir(directory);
  return 0;
}