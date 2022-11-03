#include<stdio.h>
#include<string.h>
int main(){
    char Name[20];
    //scanf("%s",&Name);  yahan spaces include nhi hoga!! gets() le lega spaces
    gets(Name);
    printf("%s \n",Name);
    //puts()
    //search the null characyer to find the length of string
    int i=0;
    while (Name[i]!='\0')
    {
        i=i+1;
    }
    printf("%d \n",i);
    // reverse the string... i is at null
    int j=0;
    i=i-1;
    while(j<i){
      int t=Name[i];
      Name[i]=Name[j];
      Name[j]=t;
      j++,i--;
    }
    printf("%s \n",Name);
    
    //palindrome or not
    int flag=0; // palindrome hai
    while (j<i)
    {
        if(Name[j]!=Name[i]){
           flag=1;
           break;
        }
            j++;
            i--;
        
    }
    if(flag==1)
       printf("Not palindrome");
    else
       printf("palindrome");
    //equal string or not
    char new1[20];
    char new2[20];
    gets(new1);
    gets(new2);
    flag=0;
    i=0;
    while (new1[i]!='\0'&& new2[i]!='\0'){
        if (new1[i]==new2[i]){
            i++;
        }
        else{
            flag=1;
            break;
        }    
    }
    if (flag==1){
        printf("unequal");
    }
    else{
        if(new1[i]==new2[i])
          printf("equal");
        else 
          printf("unequal");
    }
    return 0;
}