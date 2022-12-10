#include "main.h"

/**
* append_text_to_file - append text to end of file
* @filename: name of file
* @text_content: text to append
*
* Return: 1 on success, -1 on fail
*/


int append_text_to_file(const char *filename, char *text_content) {
  if (!filename) {
    return -1;
  }

  FILE *file = fopen(filename, "a");
  if (!file) {
    return -1;
  }

  if (!text_content) {
    fclose(file);
    return 1;
  }

  int result = fputs(text_content, file);
  if (result < 0) {
    return -1;
  }

  fclose(file);

  return 1;
}

