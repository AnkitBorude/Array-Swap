//To swap the values of the array using pointers
#include<stdio.h>
int swap(int i, int j);
int check_for_present(int x);
int arr[5]={4,5,3,2,7};//demo array
int *ptr=arr;
int main()
{
    int a;
    a = swap(5,7);// Pass the values from the global array of which you want to swap;
    printf("swap %d",a);
}
int swap(int i, int j)
{
    int chk_1,chk_2,cmb_chk;
    int *tmp_adds_1,*tmp_adds_2,*tmp_swap;
    chk_1=check_for_present(i);//to check for if the first argument is present in array
    tmp_adds_1 = ptr;
    chk_2=check_for_present(j);
    tmp_adds_2= ptr;
    cmb_chk=chk_1+chk_2;
            if(cmb_chk == 0)
            {
                if ( i == j)
                {
                    printf("\n***Cannot replace with itself");
                    return 1;
                }
                else
                {
                    printf("\nthe value is %d",*tmp_adds_1);
                    printf("\nthe value is %d",*tmp_adds_2);
                    tmp_swap = tmp_adds_1;
                    tmp_adds_1 = tmp_adds_2;
                    tmp_adds_2 = tmp_swap;
                    printf("\nthe value is %d",*tmp_adds_1);
                    printf("\nthe value is %d",*tmp_adds_2);
                    return 0;
                }
            }
            else if (chk_1 == 1 && chk_2 == 0)
            {
                printf("\n***the first value is not present in array");
                return 1;
            }
            else if (chk_1 == 0 && chk_2 == 1)
            {
                printf("\n***the second value is not present in array");
                return 1;
            }
            else if (cmb_chk == 2)
            {
                printf("\n***both values are not present in array");
                return 1;
            }

}
int check_for_present(int x)
    {

    int k=0,c=0;
        for(ptr = arr;k<sizeof(arr)/4;ptr++ && k++)
            {
                //printf("\nthe value is %d",*ptr);
                if(x== *ptr)
                {
                    break;
                }
                else
                {
                    c++;
                    continue;
                }
            }

    if (c==k && c==5)
    {
        return 1;// value is not present
    }
    else
    {
        return 0;// value is present
    }
}

