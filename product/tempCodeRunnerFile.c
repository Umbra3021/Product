#include<stdio.h>
#include<string.h>

struct travelagency{
    char name[39];
    int DLno;
    char route[30];
    int kms;
};


void details(struct travelagency s1[],int n){
    for(int i=1;i<=n;i++){

        printf("Enter %d driver Name:\n",i);
        scanf("%s", &s1[i].name);
        printf("Enter %d dl no:\n",i);
        scanf("%d", &s1[i].DLno);
        printf("Enter %d driver Route:\n",i);
        scanf("%s", &s1[i].route);
        printf("Enter %d driver kms:\n",i);
        scanf("%d", &s1[i].kms);
    }
}
void display(struct travelagency s1[],int a){
    for(int i=1;i<=a;i++){
        printf("Driver %d Name:%s\tDl no:%d\tRoute:%s\tKms:%d\n",i, s1[i].name,s1[i].DLno,s1[i].route,s1[i].kms);
    }
}

int main(){

    int n;
    struct travelagency s1[n];
    printf("Enter the number of driver you want to enter:\n");
    scanf("%d",&n);

    details(s1,n);
    display(s1,n);
    return 0;
    
}