#include <stdio.h>
#include <string.h>
#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); 

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
				
    return 0; 
}
void Shift( char s[] )
