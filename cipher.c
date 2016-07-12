/* author Rahul Semwal*/
/* This is the program for Encryption and Decryption of the 
 Input file using Caesar Cipher Algorithm. */
#include<stdio.h>
#include<stdlib.h>
 
 FILE *f1, *f2, *f3 ;
 char ch ;
 int n;

int main()
 {
printf("Encrypt the file \n");
    printf("\n");
    f1=fopen("/home/rsemwal/Desktop/a.txt","r");
    if(f1==NULL)
    {
        printf("Source File Could Not Be Found\n");
    }
    f2=fopen("/home/rsemwal/Desktop/b.txt","w");
    if(f2==NULL)
    {
        printf("Target File Could Not Be Found\n");
    }
    while(1)
    {
        ch=fgetc(f1);
        if(ch==EOF)
        {
            printf("\nEnd Of File\n");
            break;
        }
        else
        {
            ch=ch-(5*12-6);       // logic for Encryption
            fputc(ch,f2);
        }
    }
    fclose(f1);
    fclose(f2);
    printf("\n");
    

printf("Your file is Encrypted. \n"); 
printf("you want to decrypt the file ?\n");
printf("Press 1 for yes or 0 for no \n");
scanf("%d",&n);
if(n==1)
{
    printf("\n");
    f2=fopen("/home/rsemwal/Desktop/b.txt","r");
    if(f2==NULL)
    {
        printf("Source File Could Not Be Found\n");
    }
    f3=fopen("/home/rsemwal/Desktop/c.txt","w");
    if(f3==NULL)
    {
        printf("Target File Could Not Be Found\n");
    }
    while(1)
    {
        ch=fgetc(f2);
        if(ch==EOF)
        {
            printf("\nEnd Of File\n");
            break;
        }
        else
        {
            ch=ch+(5*12-6);      //logic for decryption
            fputc(ch,f3);
        }
    }
    fclose(f2);
    fclose(f3);
    printf("your file is decrypted \n");
    return 0;
}

else {
	printf("your encrypted file is ready");
}
 }
