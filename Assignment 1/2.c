#include<stdio.h>
void update_array(int x[],int size)
{
        //creating a local copy of the array
        int arr[size];
        for(int i=0;i<size;i++)
        {
                arr[i]=x[i]+24; //updating array in the function by adding twenty five
        }
        printf("The Array In the calling funcation (After updation) :\n");
        for(int i=0;i<size;i++)
        {
                printf("%d ",arr[i]);
        }
        printf("\n");
}
int main()
{
        int s;
        printf("Enter size of array :");
        scanf("%d",&s);
        int a[s];
        printf("Enter %d elements for array :\n",s);
        for(int i=0;i<s;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("The Array In the main function (Before updation) :\n");
        for(int i=0;i<s;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");
        update_array(a,s); //call by value
        printf("The Array In the main function (After updation) :\n");
        for(int i=0;i<s;i++)
        {
                printf("%d ",a[i]);
        }
}
