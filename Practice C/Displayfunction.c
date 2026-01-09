// #include<stdio.h>

// void disp(char text[], char speaker[]) {
//     printf("%s - %s\n", text, speaker);
// }

// int main() {
//     disp("The pitch is batting friendly today.", "expert");
//     disp("So we expect so many runs!", "commentator");
//     return 0;
// }
#include<stdio.h>
#define disp(text, speaker) printf("\"%s\" said by the %s\n", text, speaker)
int main(){
    disp("The pitch is batting friendly today.","expert");
    disp("So we expect so many runs!", "commentator");
    return 0;
}


/*Add just one line to the following program to compil it and print:
"The pitch is batting friendly today." said by the expert
"Sw we expect so many rus!" said by the comentator
the program:
#include<stdio.h>
int main(){
    disp(The pitch is batting friendly today.,expert);
    disp(So we expect so many runs!, commentator);
    return 0;
}
*/