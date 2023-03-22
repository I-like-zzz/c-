#include<stdio.h>
#include<stdlib.h>
#include"sqstack.h"
#include"sqstack.c"
void printf_al(const datatype data){
        printf("%d",data);
}
int main(){
        sqstack*me=st_increat();
        char str[]="(11+3)*2-5";
        char *p="2313";
        p="13123";
        printf("%s\n",p);
        int i=0;
        for(;i<maxsize;i++){
            st_push(me,&i);
        }
       st_show(me,printf_al);
        return 0;
}