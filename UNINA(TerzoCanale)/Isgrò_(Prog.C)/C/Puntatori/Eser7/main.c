#include <stdio.h>
#include <string.h>

// --- TRASCRIZIONE DAL TUO FOGLIO ---

void changePos(char *ch1, char *ch2) {
    char temp;
    
    
    temp = *ch2;    
    *ch2 = *ch1;    
    *ch1 = temp;     
}

void changeThree(int i, char *str) 
{
    if(str[i]=='\0')
    {
        printf("%s\n", str);
        return;
    }
    char *ch1, *ch2;
    for (int j = i; j < strlen(str); j++) 
    {
        ch1=&str[i];
        ch2=&str[j];
        changePos(ch1,ch2);

        changeThree(i+1, str);

        changePos(ch1,ch2);
    }
}

int main() {
    
    char str[] = {'a', 'b', 'c', 'd' , '\0'};     
    changeThree(0, str);
    
    
    return 0;
}