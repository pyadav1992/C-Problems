#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidPassword(char str[])
{
    char integers[]         = "0123456789\0";
    char smallAlphabets[]   = "abcdefghijklmnopqrstuvwxyz\0";
    char capitalAlphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
    int i=0;
    bool atleast_one_int = false;
    bool atleast_one_sAlphabet = false;
    bool atleast_one_cAlphabet = false;
        
    if(str!=NULL)
    {
        int input_length = strlen(str);
        
        while
        (
             (i<input_length)                      & 
             
             (
                  (false == atleast_one_int)       | 
                  (false == atleast_one_sAlphabet) | 
                  (false == atleast_one_cAlphabet)
             )
        )
        {
            if((NULL != strchr(integers, str[i])) && 
               (false == atleast_one_int))
            {
                atleast_one_int = true;
            }
            if((NULL != strchr(smallAlphabets, str[i])) && 
               (false == atleast_one_sAlphabet))
            {
                atleast_one_sAlphabet = true;
            }        
            if((NULL != strchr(capitalAlphabets, str[i])) && 
               (false == atleast_one_cAlphabet))
            {
                atleast_one_cAlphabet = true;
            }
            i++;
        }
    }
    return (atleast_one_int&atleast_one_sAlphabet&atleast_one_cAlphabet);
}

int main() {
    
	//code
	int t; scanf("%d", &t);
	
	while(t--)
	{
	    char str[10000]; scanf("%s", str);
        printf("%s", isValidPassword(str)?"YES":"NO");
        printf("\n");
	}
	
	return 0;
}
