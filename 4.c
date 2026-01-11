//WAP to sort the students records based on marks or roll no. using a sorting algorithm.

#include<stdio.h>
#include<string.h>

int bubble_sort(int n,int ar[n]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    return 0;
}

int main(){
    struct student{
        int roll;
        int marks;
        char name[];
    };
    int n;
    printf("Enter n: \n");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        printf("name of %d student is: \n", (i+1));
        scanf("%s",s[i].name);
        printf("roll of %d student is: \n", (i+1));
        scanf("%d",&s[i].roll);
        printf("marks of %d student is: \n", (i+1));
        scanf("%d",&s[i].marks);
    }
    
    int marks[n];
    for(int i=0;i<n;i++){
        marks[i]=s[i].marks;
    }
    int roll[n];
    for(int i=0;i<n;i++){
        roll[i]=s[i].roll;
    }

    int flag;
    printf("\nchoose 1 to sort based on roll and 0 to sort based on marks.\n");
    scanf("%d",&flag);

    if(flag==0){
        bubble_sort(n,marks);
        for(int i=0;i<n;i++){
        printf("Marks: %d , ",marks[i]);
        printf("Name: %s , ",s[i].name);
        printf("Roll: %d\n",s[i].roll);
        }
    }
    else{
        bubble_sort(n,roll);
        for(int i=0;i<n;i++){
        printf("Roll: %d , ",roll[i]);
        printf("Name: %s , ",s[i].name);
        printf("Marks: %d\n",s[i].marks);
        }
    }
    return 0;
}