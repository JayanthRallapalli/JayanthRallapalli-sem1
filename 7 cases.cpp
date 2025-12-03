#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s1[100], s2[100], result[200];
    int choice, i, j, flag, len;

    printf("\n 1. find length");
    printf("\n 2. copy string\n");
    printf("\n 3. compare strings\n");
    printf("\n 4. concatenation strings\n");
    printf("\n 5.convert to lower case\n");
    printf("\n 6. convert to upper case\n");
    printf("\n 7. reverse string\n");
    printf("\n\nSelect any option: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            
            len = 0;
            for(i = 0; s1[i] != '\0'; i++)
            len++;
            
            printf("Length of the string  = %D\n", len);
            break;

        case 2:
            printf("Enter source string: ");
            scanf(" %[^\n]", s1);
            
            for(i=0;s1[i]!='\0';i++)
            s2[i] = s1[i];
            
            s2[i] = '\0';
            printf("Copied string: %s\n", s2);
            break;

        case 3:
            printf("Enter first string: ");
            scanf(" %[^\n]", s1);
            printf("Enter second string: ");
            scanf(" %[^\n]", s2);

            flag = 0;
            for(i=0;s1[i]!='\0' ||  s2[i]!='\0'; i++){
            	if(s1[i]!=s2[i]){
            		flag = 1;
            		break;
				}
			}
			if(flag == 0)
            
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 4:
            printf("Enter first string: ");
            scanf(" %[^\n]", s1);
            printf("Enter second string: ");
            scanf(" %[^\n]", s2);
            
            for(i =0;s1[i]!='\0';i++)
            result[i]=s1[i];
            
            for(i=0;s2[j]!='\0';j++)
            result(i+j =s2[j])

            result[i+j]='\0';
            printf("Concatenated string = %s\n", result);
            break;

        case 5:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            
            for(int i = 0; s1[i] != '\0'; i++)
                if(s1[i] >= 'a' && s1[i] <= 'z')
                s1[i] = s1[i] - 32;
                
            printf("lowercase string: %s\n", s1);
            break;

        case 6:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            
            for(int i = 0; s1[i] != '\0'; i++)
                if(s1[i] >= 'a' && s1[i] <= 'z')
                s1[i] = s1[i] - 32;
                
            printf("Uppercase string: %s\n", s1);
            break;

        case 7:
            printf("Enter a string: ");
            scanf(" %[^\n]", s1);
            
            len = 0;
            for(i = 0; s1[i] !='\0'; i++)  
            len++;
            printf("reversed string = ");
            for(i = len - 1; i >= 0; i--)
            printf("%c", s1[i]);
            
            printf("\n");
            break;

        default:
            printf("Invalid choice! try again.\n");
    }

    return 0;
}
