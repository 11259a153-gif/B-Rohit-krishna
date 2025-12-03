1.basic data types
#include<stdio.h>
int main() {
 int a = 10; float b = 5.5; char c = 'A'; double d = 123.456789;
 printf("Integer: %d\n", a);
 printf("Float: %.2f\n", b);
 printf("Character: %c\n", c);
 printf("Double: %.3lf\n", d);
 return 0;
}
output
Integer: 10
Float: 5.50
Character: A
Double: 123.457