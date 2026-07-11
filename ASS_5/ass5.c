#include <stdio.h>

int charactercount(char arr[], int size, char target){
    int count =0;
    for (int i=0;i<size;i++){
        if(arr[i]==target){
            count++;
        }
    }
}
int main(){
    int size;
    char target;
    printf("enter the size of array");
    scanf("%d",&size);
    char arr[size];
    
    printf("enter the %d characters", size);
    for(int i=0; i<size; i++){
        printf("enter the %d character", i+1);
        scanf("%c", &arr[i]);
    }

    printf("enter the target character to find its repeating count");
    scanf("%c", &target);

    int counting = charactercount(arr, size, target);

    printf("the repeating count of target character is %d",counting);
    
return 0;
}
