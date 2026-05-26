#include <stdio.h>

int main()
{
    int str1[100], str2[100];
    int i, n, pos, value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &str1[i]);
    }
    printf("Enter the position u want to delete the element: ");
    scanf("%d", &pos);
    for(i=pos-1;i<n-1; i++){
        str1[i]=str1[i+1];
    }
    n--;
    printf("Array after deletion:\n");
    for(i=0; i<n; i++){
        printf("%d", str1[i]);
    }
    return 0;
}




