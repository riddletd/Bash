#include <stdio.h>
#include <stdlib.h>


/*
 * A shell script written in C, because I want to grab a cmdline
 * argument. This script will be used to initialize a git repository
 * and add all directories and files automatically to a new
 * repository.
 * 
 * Author: Trevor Riddle
 * Creation Date: May 30, 2017
 * Update: NULL
 */
int main(int argc, char ** argv) {
  char buf[100];
  char buf1[100];

  snprintf(buf, 100, "echo \"# %s\" >> README.md", argv[1]);
  system(buf);
  
  system("git init");
  system("git add README.md");
  system("git commit -m \"first commit\"");
  
  snprintf(buf1, 100, "git remote add origin https://github.com/riddletd/%s.git", argv[1]);
  system(buf1);
  
  system("git push -u origin master");
  system("gitput");
}
