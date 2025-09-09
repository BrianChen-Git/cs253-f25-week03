#include <stdio.h>

int main(void) {

   // It need three memory to allocate this string - 'a', 'b', '\0' (null)
   char cArray[2] = "ab";

   for (int i=0; i<4; i++){
      printf("%c\n", cArray[i]);
   }

   return 0;
}
